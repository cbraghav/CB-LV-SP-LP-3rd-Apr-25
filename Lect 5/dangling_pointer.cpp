#include <bits/stdc++.h>

using namespace std;

// int *fnc()
// {
//     int x = 5;

//     cout << " addr of x in fnc " << &x << endl;
//     cout << " value of x in fnc " << x << endl;
//     return &x;
// }

int main()
{

    // int *p = fnc();

    // cout << "addr which is stored in p " << p << endl;
    // cout << " data which is pointer by p " << *p << endl;

    int *p;

    {
        int z = 4;
        cout << " addr of z in fnc " << &z << endl;
        cout << " value of z in fnc " << z << endl;
        p = &z;
    }
    // p-> becomes dangling pointer

    cout << "addr which is stored in p " << p << endl;
    cout << " data which is pointer by p " << *p << endl;
}