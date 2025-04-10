#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    int c = sum(a, b);

    cout << "sum is " << c << endl;

    cin >> a >> b;
    cout << "sum for 2nd time is " << sum(5, 5);
    return 0;
}

int sum(int c, int d)
{
    return c + d;
}