#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const double pi = 3.14;
	double rd, grad;
	cout << "Введите угол в радианах=" << endl;
	cin >> rd;
	grad = 180 / pi * rd;
	cout << "Значение угла в градусах=" << grad << endl;
}

