#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int y, c, x, a, b, x0; // y0- y вершина функции x0 - x вершина функции
	x = 0;
	cout << "Введите число(a)=";
	cin >> a;
	cout << "Введите число (b)=";
	cin >> b;
	cout << "Введите число (c)=";
	cin >> c;
	x0 = -b / 2 * a;
	x = x0;
	y = a * x * x + b * x + c; // Функция
	cout << "x вершина=" << x0;
	cout << "Функция y=" << y;
	return 0;
}

