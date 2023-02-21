//Write a program which takes the values of length and breadth from user and check if it is a square or not.
#include<iostream>
using namespace std;
int main()
{
    float l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Eter breadth: ";
    cin>>b;
    if (l==b)
        cout<<"It is a SQUARE ";
    else
        cout<<"It is not  a square ";
    return 0;
}