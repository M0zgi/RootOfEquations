#include"Equation.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Equation* ptr;
	
	Linear a;
	Quadratic b;

	ptr = &a;
	ptr->Solution();
	
	cout << endl;
	cout << endl;
	
	ptr = &b;
	ptr->Solution();

	cout << endl;
	system("pause");
}