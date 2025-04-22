#include <bits/stdc++.h>

using namespace std;

int main()
{

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    // cout << st.top() << " ";

    // st.pop();

    // cout << st.top() << " ";

    // does not work
    // for (auto i : st)
    // {
    //     cout << i << " ";
    // }

    stack<int> temp = st;

    while (temp.size())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
}