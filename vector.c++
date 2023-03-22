#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 4);

    vector<int> v(5, 100); // a vector with 5 100 is crated
    vector<int> v(5);
    vector<int> v1(v); // copying the content of v vecotr

    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(7);

    cout << "printing the vector";
    for (auto it : vect)
    {
        cout << it << endl;
    }
    cout << vect.size();
    cout << vect.capacity();
}