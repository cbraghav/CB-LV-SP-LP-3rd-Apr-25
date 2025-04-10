#include <bits/stdc++.h>
using namespace std;

int number_of_digits(int x)
{
    int cnt = 0;

    while (x > 0)
    {
        x = x / 10;
        cnt++;
    }
    return cnt;
}

int number_of_digits2(int x)
{

    // string s = to_string(x);
    // return s.length();

    return to_string(x).length();
}

int main()
{
    // counter number of digits in a number

    int x = 53456;

    cout << number_of_digits2(x);
}