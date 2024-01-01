#include<bits/stdc++.h>
using namespace std;

//doubly linked list is used in list 
//the time complexity for inserting an elemenent in the vector is more than the time complexity for push_front in the list stl
int main()
{
    list <int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4};

    ls.push_front(5); // {5,2,4};
    return 0;
}