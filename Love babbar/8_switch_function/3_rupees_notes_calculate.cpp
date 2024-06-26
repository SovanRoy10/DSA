// total amount = 1330 
// we have to calculate how many notes of 100 , 50 ,20 and 1 for that amount

#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter total amount: ";
    cin>> amount;

    int hundred=0,fifty=0,twenty=0,ten=0,one=0;

    while(amount)
    {
        if(amount>=100)
        {
            hundred = amount/100;
            amount = amount%100;
        }
        else if(amount>=50)
        {
            fifty = amount/50;
            amount = amount%50;
        }
        else if(amount>=20)
        {
            twenty = amount/20;
            amount = amount%20;
        }
        else if(amount>=10)
        {
            ten = amount/10;
            amount = amount%10;
        }
        else if(amount>=1)
        {
            one =amount;
            amount=0;
        }
    }

    cout<<"Hundred : "<<hundred<<" Fifty: "<<fifty<<" Twenty: "<<twenty<< " Ten: "<< ten <<" one: "<<one<<endl;
    return 0;
}