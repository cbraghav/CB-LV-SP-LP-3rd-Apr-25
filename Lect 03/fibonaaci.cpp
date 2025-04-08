#include <bits/stdc++.h>
using namespace std;
int main()
{

    double n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << "first fib is" << a << endl;
    cout << "second fib is " << b << endl;
    for (int i = 3; i <= n; i++)
    {
        int c = a + b;
        cout << i << " fib number is " << c << endl;
        a = b;
        b = c;
    }
}