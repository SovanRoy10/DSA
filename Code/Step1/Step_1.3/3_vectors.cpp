#include <bits/stdc++.h>
using namespace std;

// singly linked list is maintained for vector stl
void display(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // similar as push_back , and it is faster than push_back

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // automatically assums as pair

    vector<int> v1(5); // {0,0,0,0,0}

    vector<int> vec1(5, 100); // {100,100,100,100,100}

    vector<int> v2(5, 20);

    vector<int> v3(v1); // copy of v1 vector

    // iterator
    for (auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *(it) << " ";
    }

    // printing the last element of vector
    cout << endl
         << v2.back() << endl;

    // for each loop
    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << endl;

    // The deletion of vector
    v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 1);

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // for multiple deletion : v.erase(starting position , the ending position+1)
    v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 1, v.begin() + 4);
    display(v);

    // Insertion
    vector<int> temp(2, 100);       // {100,100}
    temp.insert(temp.begin(), 300); // {300,100,100};
    temp.insert(temp.begin() + 1, 2, 10); // {300,10,10,100,100}

    // size
    cout<<v.size();

    //{10,20}
    v.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}

    v1.swap(v2); // v1 -> {30,40} , v2-> {10,20}
    v.clear(); // erases the entire vector

    cout<< v.empty(); // returns 0 if vector is empty and returns 1 if vector is not empty

    return 0;
}