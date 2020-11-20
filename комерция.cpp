#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "Russian");
   float k; // кредит
   int p; // %
   int r; // доход в год
   int yrs=0; // кол-во прошедших годов
   int tr=0; // заработанные деньги
   cout << "Введите сумму кредита=";
   cin >> k;
   cout << "Введите процент кредита=";
   cin >> p;
   cout << "Введите доход в год=";
	cin >> r;
	int res = k / 100 * p;
	if (res >= r) cout << "Кредит не будет погашен";
	else
	{
		while (tr < k)
		{
			k += res;
			tr += r;
			++yrs;

	}
		cout << "Кредит будет погашен за=" << yrs;
	}
	return 0;


}

