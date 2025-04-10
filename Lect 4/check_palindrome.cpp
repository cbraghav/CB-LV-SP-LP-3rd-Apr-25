#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{

    int reverse = 0;

    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
    }

    return reverse;
}
bool check_palindrome(int n)
{

    if (n == reverse(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n = 12321;

    cout << check_palindrome(n) << endl;
}