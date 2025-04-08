#include <bits/stdc++.h>

using namespace std;

int main()
{

    int number;
    cin >> number;

    int sum = 0;
    int r = 50;

    while (number > 0)
    {
        r = number % 10;
        sum += r;

        number = number / 10;
    }
    cout << r << " ";

    cout << "sum of digts is" << sum << endl;
}