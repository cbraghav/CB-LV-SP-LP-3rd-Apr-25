#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
    //
    int a = 5;

    cout << "a is an integer with value " << a << endl;

    // Address of operator -> (&)
    cout << "addr of a is : " << (&a) << endl;

    int *p = &a;
    cout << "pointer p has value " << p << endl;

    // Derefernce operator (*) -> it tells the value that is stored on the addr which is reffered by pointer

    cout << "value of a using pointer " << *p << endl;

    a = 6;

    cout << "value of a using pointer after changing the actual value " << *p << endl;

    int b = 7;

    p = &b;

    cout << "value of b via pointer " << *p << endl;

    *p = 9;

    cout << " value of actual b after changing with pointer " << b << endl;
    cout << " value of b using pointer " << *p << endl;

    char c = 'a';

    // p = &c; this is wrong

    char *pc = &c;

    cout << " value of character c using poitner pc " << *pc << endl;

*/

    int a = 5;

    int *p = &a;

    int **q = &p;

    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    cout << *q << "  " << (&a) << " " << p << endl;
    cout << q << " " << (&p) << endl;
}