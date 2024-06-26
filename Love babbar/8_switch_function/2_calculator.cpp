#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    
   while(1)
   {

    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter the operator: (Press 0 for exit): ";
    cin>>ch;

     switch (ch)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;

    case '0':
        exit(0);
        break;
    default:
        cout<<"Please enter right operator"<<endl;
        break;
    }
   }
    return 0;
}