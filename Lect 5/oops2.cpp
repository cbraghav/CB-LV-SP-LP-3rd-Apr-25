#include <bits/stdc++.h>
using namespace std;

class smartphone
{

private:
    string password;

    void change_bios_settings()
    {
    }
    void verify_password_security()
    {
    }

public:
    int year_of_manufacture;
    int screen_size;
    // int get_year_of_manufacture()
    // {
    //     return year_of_manufacture;
    // }
    // void set_year_of_manufacure(int yom)
    // {
    //     year_of_manufacture = yom;
    // }
    void make_call()
    {
    }

    void run_safety_check()
    {
        verify_password_security();
        about_phone();
    }
    // default constuctor
    smartphone()
    {
        cout << "default constructor is called " << endl;
    }
    smartphone(int yom)
    {
        cout << " parameterized constructor is called" << endl;
        year_of_manufacture = yom;
    }
    smartphone(int yom, int ss, string pass)
    {
        cout << "another parameterized cons is called" << endl;
        year_of_manufacture = yom;
        screen_size = ss;
        password = pass;
    }
    smartphone(int abc, int bcd, int cde)
    {
    }
    // smartphone(smartphone s1)
    // {
    //     cout << "copy constructor is called " << endl;
    //     year_of_manufacture = s1.year_of_manufacture;
    //     screen_size = s1.screen_size;
    // }

    ~smartphone()
    {
        cout << "destructor is called " << endl;
    }

protected:
    string batter_type;
    void about_phone()
    {
    }
};

class earphones : public smartphone
{
public:
    void fnc()
    {
        cout << year_of_manufacture << endl;
        // cout << password << endl;
        cout << batter_type << endl;
    }
};

int main()
{

    // smartphone samsung;
    // cout << samsung.screen_size << endl;
    // samsung.make_call();
    // samsung.run_safety_check();

    // // samsung.verify_password_security();

    // // samsung.about_phone();

    // earphones myearphone;

    // cout << myearphone.year_of_manufacture << endl;
    // // cout << myearphone.batter_type << endl;

    smartphone myphone;
    cout << myphone.year_of_manufacture << endl;
    myphone.year_of_manufacture = 2020;

    smartphone myphone2(2020);
    cout << myphone2.year_of_manufacture << endl;

    // smartphone myphone4.year_of_manufacture = 2020; this is wrong

    smartphone myphone3(2024, 5, "abc123");
    cout << myphone3.year_of_manufacture << endl;

    smartphone myphone5(myphone3);
    cout << myphone5.year_of_manufacture << endl;
}