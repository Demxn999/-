#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
        int a, S, St,z;
        int r;
        const int Pi = 3.14;
        cout << "Введите число a для правильного треугольника" << endl;
        cin >> a;
        S = ((a * a * ((sqrt(3))) / 4));
        cout << "Введите число r для круга" << endl;
        cin >> r;
        St = Pi * r * r;
        if (S > St) z = S / St;
            cout << "Количество кругов равно=" << z;
            if (S < St) cout << "Нельзя вырезать";
            return(0);
}
