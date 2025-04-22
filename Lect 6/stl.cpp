#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    // cout << "first element of arr " << arr[0] << endl;

    /*
    vector<int> v = {1, 2, 3, 4, 5};
        cout << "first element of vector " << v[0] << endl;

        vector<int>::iterator i1 = v.begin();

        cout << *i1 << endl;
        // cout << i1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;

        for (vector<int>::iterator itr = v.begin(); itr < v.end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;

        for (auto itr = v.rbegin(); itr < v.rend(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;
        for (int i : v) // i in {1,2,3,4,5}
        {
            cout << i << " ";
        }
        cout << endl;
        // elements ->  z [ 1, 2, 3, 4, 5]  x
        // index ->    -1 [ 0  1  2  3  4]  5

        // .begin() -> return iterator to first element   v[0]
        // .end() -> return iterator to next of last element  v[n]
        // .rbegin() -> return iterator to last element v[n-1]
        // .rend() -> return iterator to prev of first elemtn v[-1]

        // cout << *v.begin() << " first element " << endl;
        // cout << *v.rbegin() << " last element " << endl;
        // cout << *v.rend() << endl;

        */
    // .push_back(x);

    vector<int> v = {1, 2, 3, 4, 5};
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.size() << endl
         << endl;
    ;

    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.size();

    // .pop_back()

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.size() << endl;

    v.clear();

    for (auto i : v)
        cout << i << " ";

    cout << v.size() << endl;
}