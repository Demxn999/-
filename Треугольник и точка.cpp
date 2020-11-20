#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите координаты=" << endl;
	int x1, x2, x3, y1, y2, y3, abs, x4, y4,abs1,abs2,abs3;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	abs = ((x1 - x3) * (y2 - y3) + (x2 - x3) * (y3 - y1));
	abs1 = ((x1 - x4) * (y2 - y4) + (x2 - x4) * (y4 - y1));
	abs2= ((x1 - x3) * (y4 - y3) + (x4 - x3) * (y3 - y1));
	abs3= ((x4 - x3) * (y2 - y3) + (x2 - x3) * (y3 - y4));
	if (abs) { 
		if (abs == (abs1 + abs2 + abs3))
			cout << "Точка находится внутри треугольника\n";
		else
			cout << "Точка находится вне треугольника\n";
	}
	else cout << "Треугольник не существует\n";
	return 0;
}


