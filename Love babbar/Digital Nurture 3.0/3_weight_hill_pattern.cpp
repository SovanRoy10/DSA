#include<iostream>
using namespace std;
int totalWeight(int totalLevel,int headWeight , int increment)
{
    int sum =0;
    for(int i=1;i<=totalLevel;i++)
    {
        sum = sum + (headWeight * i);
        headWeight += increment;
    }
    return sum;
}
int main()
{
    int totalLevel,headWeight,increment;

    cin>> totalLevel >> headWeight >> increment;

    cout<< totalWeight(totalLevel,headWeight,increment);

    return 0;
}