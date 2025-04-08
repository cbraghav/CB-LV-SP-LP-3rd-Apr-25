#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    if (b >= 0)
    {
        int res = 1;

        for (int i = 1; i <= b; i++)
        {
            res = res * a;
        }
        cout << res << endl;
    }
    else
    {
        int res = 1;

        for (int i = 1; i <= abs(b); i++)
        {
            res = res * a;
        }
        cout << (1.0 / res) << endl;
    }
}