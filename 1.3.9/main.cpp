#include <iostream>
#include <conio.h>

int main()
{
int a;
int b;

std::cout << "Podaj pierwsza liczbe ";
std::cin >> a;

std::cout << "Podaj druga liczbe ";
std::cin >> b;

std::cout << a << " + " << b << " = " << a+b << std::endl;

std::cout << a << " - " << b << " = " << a-b << std::endl;

std::cout << a << " * " << b << " = " << a*b << std::endl;

std::cout << a << " / " << b << " = " << a/b << std::endl;

std::cout << "Aby zakoñczyæ program, wciœnij dowolny klawisz";

getch();

}
