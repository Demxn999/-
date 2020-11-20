#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    int  a, b, c, d, maxa, maxb;
    double R;
    cout << "Введите а: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;
    cout << "Введите c: " << endl;
    cin >> c;
    cout << "Введите d: " << endl;
    cin >> d;
    maxa = 0,
        maxb = 0;
    cout << "Введите R: " << endl;
    cin >> R;
    if (maxa < a)
    {
        maxa = a;
        if (maxa < b) {
            maxa = b;
        }
    }
    if (maxb < c)
    {
        maxb = c;
        if (maxb < d) {
            maxb = d;
        }
    }
    if (sqrt(maxa * maxa + maxb * maxb) <= 2 * R) {
        cout << "да" << endl;
    }
    else {
        cout << "нет" << endl;
    }
    return(0);
}