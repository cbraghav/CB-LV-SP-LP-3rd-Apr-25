#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x)
{
    // for (int i = 2; i < x; i++)
    // {
    //     if (x % i == 0)
    //     {
    //         return false;
    //     }
    // }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

void print_prime_numbers(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i) == true)
        {
            cout << i << " is a prime number" << endl;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    print_prime_numbers(n);
}