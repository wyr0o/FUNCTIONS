#include <iostream>
#include <Windows.h>
using namespace std;

void exponentiation(int value, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	cout << value << " в степени " << power << " = " << result<< endl;
	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	exponentiation(5, 2);
	exponentiation(3, 3);
	exponentiation(4, 4);
}