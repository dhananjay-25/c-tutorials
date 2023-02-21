//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) andcalculate Profit or Loss.
#include<iostream>
using namespace std;
int main()
{
    int cp,sp,p,l;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp > cp)
    {
        p = sp - cp;
        cout<<"Profit = "<<p;
    }
    else
    {
        l = cp - sp;
        cout<<"Loss = "<<l;
    }
    return 0;
}