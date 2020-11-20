#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int k, l, m;
    cout << "Введите k\n";
    cin >> k;
    cout << "Введите l\n";
    cin >> l;
    cout << "Введите m\n";
    cin >> m;
    if (k % l == 0)
        cout << k << "-Кратно-" << l<<endl;
    if (l % k == 0)
        cout << l << "-Кратно-" << k<<endl;
    if (l % m == 0)
        cout << l << "-Кратно-" << m<<endl;
    if (m % l == 0)
        cout << m << "-Кратно-" << l<<endl;
    if (k % m == 0)
        cout << k << "-Кратно-" << m<<endl;
    if (m % k == 0)
        cout << m << "-Кратно-" << k<<endl;
    else
        cout << "Числа не кратны";
    return(0);
}

