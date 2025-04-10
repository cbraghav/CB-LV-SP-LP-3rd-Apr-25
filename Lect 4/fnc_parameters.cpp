#include <bits/stdc++.h>

using namespace std;

// int fnc(int &a, int b) // formal parameter
// {
//     a++;
//     b++;

//     return a + b;
// }

//& -> pass by ref
// no& -> pass by val

// void return_sum_and_diff(int a, int b, int sum, int diff, string name)
// {

//     sum = a + b;
//     diff = a - b;
//     name = "aman";
// }

void sum(int a, int b)
{

    cout << a + b << endl;
}
int main()
{

    int c = 5, d = 8; // variable c and d

    sum(2, 9);

    // int x = fnc(c, d); // actual parameter

    // cout << c << " " << d << endl;

    // int sum, diff;
    // string n;
    // return_sum_and_diff(c, d, sum, diff, n);

    // cout << "sum is " << sum << " and diff is " << diff << " and name is " << n;
}