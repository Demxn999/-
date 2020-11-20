#include <iostream>
using namespace std;
int main()
{
	int f, c, d, v,a;
	cout << "vvedite chislo=" << endl;
	cin >> f;
	c = f % 10;
	d = f / 10;
	v = d % 10;
	a = d / 10;
	if ((c + v + a) % 3 == 0)
		cout << "Chislo " << f << " delitsa na 3";
	else 
		cout << "Chislo " << f << " ne delitsa na 3";
	return 0;
}


