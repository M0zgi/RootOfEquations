#pragma once

#include<iostream>
#include<Windows.h>
#include <cmath>

using namespace std;

class Equation
{
public:
	Equation() {}
	virtual void Solution()  = 0;

protected:
	double a, b, x1;
};


class Quadratic : public Equation
{
public:
	double c, d, x2;
	Quadratic() {}
	virtual void Solution() override;
};

class Linear : public Equation
{
public:	
	Linear() {}	
	virtual void Solution() override;
};

void Quadratic::Solution()
{
	cout << "Квадратное уравнение имеет вид: a * x^2 + b * x + c = 0" << endl;
	cout << "Введите a = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите c = ";
	cin >> c;

	cout << "Квадратное уравнение можно решить с помощью дискриминанта" << endl;
	cout << "d = b * b - 4 * a * c" << endl;

	d = b * b - 4 * a * c; // Рассчитываем дискриминант

	cout << "D = " << d << endl;
	if (d > 0) // Условие если дискриминант > 0
	{
		cout << "Т.к. дискриминант > 0, то уравнение имеет два корня" << endl;

		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);

		cout << "Численный ответ:" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	if (d == 0) // Условие если дискриминант == 0
	{
		x1 = -(b / (2 * a));
		cout << "x1 = x2 = " << x1 << endl;
	}
	if (d < 0) // Условие при дискриминанте < 0
		cout << "Дискриминант < 0, Действительных корней уравнения не существует" << endl;

	system("pause");
}

void Linear::Solution()
{	
	cout << "Линейное уравнениее имеет вид: ax + b = 0" << endl;
	
	cout << "Введите a = ";
	cin >> a;

	cout << "Введите b = ";
	cin >> b;

	cout << "Дано линейное уравнение " << a << " * x + " << b << " = 0" << endl;	

	if (a != 0)
	{
		cout << "Переносим свободные слагаемые (без x) из левой части в правую, получим: " << a;
		
		if (b)
			cout << "x" << " = (-)" << b << endl;

		else
			cout << "x" << " = " << b << endl;

		cout << "Разделим обе части ур-ния на " << a << " : x = ";
		
		if (b)
			cout << "(-)" << b << " / " << a << endl;

		else
			cout << b << " / " << a << endl;

		cout << "Ответ: x = ";
		
		if (b)
			x1 = (-b) / a;
		else
			x1 = b / a;
		
		cout << x1 << endl;		
	}
		
	if (a == 0 && b == 0)
	{
		cout << "Уравнение является тождеством - его решением является любое x" << endl;			
	}	

	if (a == 0 && b != 0)
	{
		cout << "У уравнения не может быть корней (нельзя подобрать переменную, чтобы было верным равенство)" << endl;			
	}
	system("pause");
}