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
	double c, d, x1, x2;
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
	cout << "���������� ��������� ����� ���: a * x^2 + b * x + c = 0" << endl;
	cout << "������� a = ";
	cin >> a;
	cout << "������� b = ";
	cin >> b;
	cout << "������� c = ";
	cin >> c;

	cout << "���������� ��������� ����� ������ � ������� �������������" << endl;
	cout << "d = b * b - 4 * a * c" << endl;

	d = b * b - 4 * a * c; // ������������ ������������

	cout << "D = " << d << endl;
	if (d > 0) // ������� ���� ������������ > 0
	{
		cout << "�.�. ������������ > 0, �� ��������� ����� ��� �����" << endl;

		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);

		cout << "��������� �����:" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	if (d == 0) // ������� ���� ������������ == 0
	{
		x1 = -(b / (2 * a));
		cout << "x1 = x2 = " << x1 << endl;
	}
	if (d < 0) // ������� ��� ������������� < 0
		cout << "������������ < 0, �������������� ������ ��������� �� ����������" << endl;

	system("pause");
}

void Linear::Solution()
{	
	cout << "�������� ���������� ����� ���: ax + b = 0" << endl;
	
	cout << "������� a = ";
	cin >> a;

	cout << "������� b = ";
	cin >> b;

	cout << "���� �������� ��������� " << a << " * x + " << b << " = 0" << endl;	

	if (a != 0)
	{
		cout << "��������� ��������� ��������� (��� x) �� ����� ����� � ������, �������: " << a;
		
		if (b)
			cout << "x" << " = (-)" << b << endl;

		else
			cout << "x" << " = " << b << endl;

		cout << "�������� ��� ����� ��-��� �� " << a << " : x = ";
		
		if (b)
			cout << "(-)" << b << " / " << a << endl;

		else
			cout << b << " / " << a << endl;

		cout << "�����: x = ";
		
		if (b)
			x1 = -b / a;
		else
			x1 = b / a;
		
		cout << x1 << endl;		
	}
		
	if (a == 0 && b == 0)
	{
		cout << "��������� �������� ���������� - ��� �������� �������� ����� x" << endl;			
	}	

	if (a == 0 && b != 0)
	{
		cout << "� ��������� �� ����� ���� ������ (������ ��������� ����������, ����� ���� ������ ���������)" << endl;			
	}
	system("pause");
}