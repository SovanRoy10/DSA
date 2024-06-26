#include<iostream>
using namespace std;
int main()
{
    int a=4,b=6;

    cout<<"a & b: "<< (a & b)<< endl;
    cout<<"a | b: "<< (a & b)<< endl;
    cout<<"~ a: "<< (~a)<< endl;
    cout<<"~ b: "<< (~b)<< endl;
    cout<<"a ^ b: "<<( a ^ b)<< endl;

    // left shift and right shift operator

    cout<< (17 >> 1) << endl; // 8
    cout<< (17 >> 2) << endl; // 4
    cout<< (19 << 1) << endl; // 38
    cout<< (21 << 2) << endl; // 84


    return 0;
}