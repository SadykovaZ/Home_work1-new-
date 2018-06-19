#include<stdio.h>
#include<iostream>
#include<Windows.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	
	cout << "1. Вывести на экран прямоугольник с заданными сторонами заданныи символом." << endl;

	char symbol = '#';
	int a, b;

	cout << "Введите первую сторону прямоугольника" << endl;
	cin >> a;
	cout << "Введите вторую сторону прямоугольника" << endl;
	cin >> b;
	for (int i = 0; i < a; i++)
		if (i == 0 || i == a - 1)
		{
			for (int j = 0; j < b; j++)
				cout << symbol;
			cout << endl;
		}
		else
		{
			cout << symbol;
			for (int j = 0; j < b - 2; j++)
				cout << " ";
			cout << symbol << endl;
		}

	cout << "2. Вывести на экран пустой прямоугольник с заданными размерами заданным символом заданного цвета." << endl;


	
	char symbol1 = '*';
	int c, d, e;

	cout << "Введите первую сторону прямоугольника" << endl;
	cin >> c;
	cout << "Введите вторую сторону прямоугольника" << endl;
	cin >> d;
	cout << "Введите цвет для фигуры" << endl;
	cin >> e;
	
	SetConsoleTextAttribute(hConsole, e);
	for (int i = 0; i < c; i++)
		if (i == 0 || i == c - 1)
		{
			for (int j = 0; j < d; j++)
			cout << symbol1;
			cout << endl;
		}
		else
		{
			cout << symbol1;
			for (int j = 0; j < d - 2; j++)
				cout << " ";
			cout << symbol1 << endl;
		}
	SetConsoleTextAttribute(hConsole, 15);
}

