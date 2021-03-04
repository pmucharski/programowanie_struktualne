#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{
	unsigned int n;
	double sum = 0;
	if (argc == 1)
	{
		cout << "n = ";
		cin >> n;
		cout << endl;
	}
	else if (argc == 2)
	{
		n = stoi(argv[1]);
		cout << endl;
	}
	else
	{
		cout << endl << "Argumenty: <n>" << endl;
		return 1;
	}
	for (unsigned int i = 0; i <= n; i++)
	{
		sum += pow(i, 2);
	}
	cout << "Suma wynosi " << sum << ".";
	if (argc == 1)
	{
		system("pause");
	}
	return 0;
}
