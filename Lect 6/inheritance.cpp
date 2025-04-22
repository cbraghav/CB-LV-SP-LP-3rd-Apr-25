#include <bits/stdc++.h>
using namespace std;

class vehicle
{

private:
    int chasis_number;

protected:
    int engine_number;

public:
    string color;
    int tyre_count;
    int max_speed;

    void add(int a, int b)
    {
        cout << "the sum of two numbers is " << a + b << endl;
        return;
    }

    void add(int a, int b, int c)
    {
        cout << "the sum of three numebers is " << a + b + c << endl;
    }
};

class car : public vehicle
{

public:
    int num_gears;
    // string color;
    //  int tyre_count;
    //  int max_speed;

protected:
    // int engine_number;

private:
    // * nothing from parent
};

class bike : protected vehicle
{

public:
    int num_gears;

protected:
    // int engine_number;
    // string color;
    //  int tyre_count;
    //  int max_speed;

private:
    // * nothing from parent
};

class cycle : private vehicle
{

public:
    int num_gears;

protected:
private:
    // string color;
    // int tyre_count;
    // int max_speed;
    // int engine_number;
    //* no private member/function from parent
};

int main()
{
    vehicle v1;
    v1.add(2, 4);
    v1.add(2, 5, 6);
    // v1.color;
}