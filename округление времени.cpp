#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int h, m, s;
	cout << "enter hours=";
	cin >> h;
	cout << "enter minutes=";
	cin >> m;
	cout << "enter seconds=";
	cin >> s;
	cout << setfill('0');
	cout << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << endl;
	cout << "I\n";
	m = (s < 30) ? m : (m + 1);
	(m > 59) ? (m = 0), h++ : m;
	cout << setw(2) << h << ":" << setw(2) << m << endl;
	cout << "II\n";
	h = (m < 30) ? h : h + 1;
	cout << setw(2) << h << endl;

}

