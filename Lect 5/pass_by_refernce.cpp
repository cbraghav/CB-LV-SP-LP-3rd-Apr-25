#include <bits/stdc++.h>
using namespace std;

void increase(int &x)
{
    x++;
}

int main()
{

    // int a = 5;
    // increase(a);
    // cout << a << endl;

    // refernce -> (&)

    // int a = 5;
    // int b = a;
    // a++;

    // cout << b << " and " << a << endl;

    int a = 5;
    int &b = a;
    a++;
    // b++;
    cout << b << " and " << a << endl;
}