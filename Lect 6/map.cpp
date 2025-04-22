#include <bits/stdc++.h>
using namespace std;

int main()
{

        map<string, int> marks = {{"raghav", 50}, {"karan", 70}};
    // unordered_map<string, int> marks = {{"raghav", 50}, {"karan", 70}};

    // insert

    marks["aditya"] = 80;
    marks.insert({"naman", 90});

    for (auto i : marks)
    {
        cout << i.first << " " << i.second << endl;
    }

    // access

    cout << marks["raghav"] << endl;
    cout << marks["aditya"] << endl;
    cout << marks.at("raghav") << endl;

    // find

    auto it = marks.find("aditya");
    if (it == marks.end())
    {
        cout << " marks for this person does not exist" << endl;
        ;
    }
    else
    {
        cout << it->second << endl;
    }

    //
    if (marks["anika"] == 0)
    {
        cout << "marks of this person doest not exist" << endl;
    }

    for (auto i : marks)
    {
        cout << i.first << " " << i.second << endl;
    }

    // delte

    marks.erase("raghav");
    marks.erase(it);
    cout << "marks after deletion" << endl;
    for (auto i : marks)
    {
        cout << i.first << " " << i.second << endl;
    }
}