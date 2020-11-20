#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, r, s, t;
	cout << "Введите ребра коробки" << endl;
	cin >> a >> b >> c;
	cout << "Введите рёбра посылки" << endl;
	cin >> r >> s >> t;
	if (
		(a <= r && b <= s && c <= t) ||
		(a <= r && c <= s && b <= t) ||
		(b <= r && a <= s && c <= t) ||
		(b <= r && c <= s && a <= t) ||
		(c <= r && a <= s && b <= t) ||
		(c <= r && b <= s && a <= t)
		) cout << "Поместится";
	else
		cout << "Не влезет";

}