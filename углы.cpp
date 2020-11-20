#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const double pi = 3.14;
    double degrees, min, sec, a, rd;
    cout << "Введите градусы,минуты,секунды" << endl;
    cin >> degrees >> min >> sec;
    a= degrees + min / 60.0 + sec / (60.0 * 60.0); //gradusi
    rd =a * pi / 180.0;
    cout << "Значение в радианах равно=" << rd;
    return 0;
}


