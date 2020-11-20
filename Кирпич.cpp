#include<iomanip>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите длинну кирпича  a: ";
	cin >> a;
	cout << "Введите ширину кирпича b: ";
	cin >> b;
	cout << "Введите высоту кирпича c: ";
	cin >> c;
	int r, s;
	cout << "Введите размер отверстия x: ";
	cin >> r;
	cout << "Введите размер отверстия y: ";
	cin >> s;
	if (((a <= r) && (b <= s)) || ((a <= s) && (b <= r)))
		cout << "Войдёт" << endl;
	else if (((a <= r) && (c <= s)) || ((a <= s) && (c <= r)))
		cout << "Войдёт" << endl;
	else if (((b <= r) && (c <= s)) || ((b <= s) && (c <= r)))
		cout << "Войдёт" << endl;
	else cout << "Опа!Не влезло!" << endl;
	return (0);
}


