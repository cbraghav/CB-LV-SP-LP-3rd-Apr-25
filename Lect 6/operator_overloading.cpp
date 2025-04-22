#include <bits/stdc++.h>
using namespace std;

class complex_numbers
{
public:
    int real, img;

    complex_numbers operator+(complex_numbers c2)
    {
        complex_numbers c3;
        c3.real = this->real + c2.real;
        c3.img = this->img + c2.img;
        return c3;
    }
};

int main()
{

    complex_numbers c1, c2;
    c1.real = 5;
    c1.img = 7;

    c2.real = 3;
    c2.img = 15;

    // complex_numbers c3 = c1 + c2;
    complex_numbers c3 = c1.operator+(c2);

    cout << c3.real << " + i" << c3.img << endl;

    // 5 + 7
    // .operato5r+(7);
}