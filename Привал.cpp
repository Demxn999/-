#include <iostream>
using namespace std;

int main()
{
    int t1, t2, t3, s1, s2, s3, v1, v2, v3, s;
    cout << "Vvedite t1,t2,t3,v1,v2,v3";
    cin >> t1 >> t2 >> t3 >> v1 >> v2 >> v3;
    s = (t1 * v1) + (t2 * v2) + (t3 * v3);
    s1 = t1 * v1;
    s2 = t2 * v2;
    if (s/2 - s1 == 0)
        cout << t1;
    else cout << t1 + t2;

}


