#include <bits/stdc++.h>

using namespace std;

int main()
{

    double temp_deg_cel;
    cin >> temp_deg_cel;

    double temp_deg_far = ((9.0 / 5) * (temp_deg_cel)) + 32;
    // double temp_deg_far = ((9 * temp_deg_cel) / 5) + 32;
    cout << "temp in deg far is " << temp_deg_far << endl;
}