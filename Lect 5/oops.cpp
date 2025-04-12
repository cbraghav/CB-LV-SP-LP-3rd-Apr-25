#include <bits/stdc++.h>

using namespace std;

class Car
{

    // data members
private:
    string brand = "audi";
    string type;
    int tyres;
    int model;
    int top_speed = 100;
    int service()
    {
        top_speed++;
    }

public:
    string owner_name;

    // methods
    void run()
    {
        cout << "car run at a speed of ";
        print_top_speed();
    }
    void start()
    {
        cout << "car is started" << endl;
    }

    void print_brand()
    {
        cout << " this car is of " << brand << " company" << endl;
    }
    void print_top_speed()
    {
        cout << "the top speed of this car is " << top_speed << endl;
    }
    // int stop() {}
    // int gate_open() {}

    // constructor
    Car()
    {
        cout << "constructor is called" << endl;
    }
};

int main()
{

    // Class_name objectname;

    // Car mycar; // mycar is an object of class Car
    // // int a;
    // cout << "hello";

    // mycar.brand = "audi";
    // mycar.tyres = 4;
    // mycar.model = 2021;
    // mycar.run();

    // mycar.

    Car mycar;
    mycar.owner_name = "aman";
    mycar.run();

    // mycar.top_speed = 500;
    mycar.print_top_speed();
    mycar.print_brand();
}