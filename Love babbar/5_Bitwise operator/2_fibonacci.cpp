 #include<iostream>
 using namespace std;
 int main()
 {
    int n=10;
    //printing first 10 numbers of fibonacci series

    int a=-1,b=1;
    for(int i=0;i<n;i++)
    {
        int sum= a+b;
        cout<<sum << " ";
        a = b;
        b = sum;
    }
    return 0;
 }