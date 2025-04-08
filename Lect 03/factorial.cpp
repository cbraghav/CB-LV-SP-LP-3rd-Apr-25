#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int res = 1;
    for (int i = 1; i <= N; i++)
    {
        res = res * i;
    }

    cout << res << endl;
}