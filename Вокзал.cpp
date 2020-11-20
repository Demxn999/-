#include<iomanip>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int S, T, v1, v2, v3, p1, p2, p3;
    p3=0;
    p2 = 0;
    p1 = 0;
        cout << "Введите путь до вокзала" << endl;
        cin >> S;
        cout << "Введите время до вокзала" << endl;
        cin >> T;
        cout << "Введите скорость такси " << endl;
        cin >> v1;
        cout << "Введите скорость на автобусе"<< endl;
        cin >> v2;
        cout << "Введите скорость пешком" << endl;
        cin >> v3;
        p1 = 2 * S;
            p2 = S;
            if (v1 * T >= S)
                cout << "Вы можете доехать на такси за" << p1 << "рублей"<< endl;
            if (v2*T>=S)
                cout << "Вы можете доехать на автобусе за" << p2 << "рублей" << endl;
            if (v3 * T >= S)
                cout << "Вы можете дойти пешком за 0 рублей" << endl;
            if ((v1 * T >= S) && (v2 * T >= S) && (v3 * T >= S))
                cout << "Дешевле всего будет дойти пешком" << endl;
            if ((v1 * T >= S) && (v2 * T >= S))
                cout << "Дешевле всего будет доехать на автобусе за" << p2 << "рублей" << endl;
            if (v1 * T >= S)
                cout << "Только такси за" << p1 << "рублей";       
            return(0);
}


