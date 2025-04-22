#include <bits/stdc++.h>

using namespace std;

void printst(set<int> st)
{
    for (auto i : st)
    {
        cout << i << " ";
    }

    cout << endl;
}
int main()
{

    // set<int, std::greater<int>> st = {3, 2, 5, 1, 4, 3, 3, 3};
    // // st = {1,2,3,4,5}

    // // printst(st);

    // for (auto i : st)
    // {
    //     cout << i << " ";
    // }
    // // insert -> st.insert(6);

    // st.insert(-1);
    // st.insert(6);
    // st.insert(6);
    // st.insert(6);
    // st.insert(6);
    // st.insert(6);
    // st.insert(6);

    // printst(st);

    // // find an element

    // auto it = st.find(3);
    // // if preset -> iterator
    // // if not present -> st.end();

    // if (it == st.end())
    // {
    //     cout << "13 is not in my set" << endl;
    //     ;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    // // remove // delete

    // st.erase(5);  // using data
    // st.erase(it); // using iterator

    // printst(st);

    // set

    // insert- > o(log(n));
    // find -> o(log(n));
    // delete -> o(log(n));

    // unordered_set<int> st = {2, 3, 4, 4, 2, 7};
    // // insert- > o(1);
    // // find -> o(1);
    // // delete -> o(1);
    // for (auto i : st)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // set -> ordered and unique
    // unordered_set -> not_ordered but unique
    // multiset -> ordered - not unique

    multiset<int, std::greater<int>> st = {3, 2, 5, 1, 4, 3, 3, 3};

    for (auto i : st)
    {
        cout << i << " ";
    }
}