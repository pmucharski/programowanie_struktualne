#include <iostream>

using namespace std;

void funkcja(int n,int *w) {
    *w = n;
}

int main() {

    int x, y=0;

    cout<<"Podaj x: ";
    cin>>x;

    cout << "Wartosc zmiennej y przed zmiana: " << y << endl;
    funkcja(x, &y);
    cout << "Wartosc zmiennej y po zmianie: " << y << endl;

    return 0;
}
