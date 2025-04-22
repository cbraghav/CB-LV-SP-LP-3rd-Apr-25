#include <bits/stdc++.h>
using namespace std;

class smartphone
{

    string model;
    int year_of_manu;

public:
    void set_details(string model, int yom)
    {
        this->model = model;
        this->year_of_manu = yom;
    }
    void get_details()
    {
        cout << "the model of the phone is " << this->model << endl;
        cout << "this phone is manufactured in year " << this->year_of_manu << endl;
    }
};
int main()
{

    smartphone apple;
    apple.set_details("Iphone 16 Pro", 2024);
    apple.get_details();
}