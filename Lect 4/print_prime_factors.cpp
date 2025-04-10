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

void print_prime_factors(int n)
{

    // for (int i = 2; i  <= n; i++)
    // for (int i = 2; i * i <= n; i++)
    for (int i = 2; i < sqrt(n); i++)
    {
        if (is_prime(i))
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }

    if (n >= 2)
    {
        cout << n << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    print_prime_factors(n);
}

// find all divisors of a number 