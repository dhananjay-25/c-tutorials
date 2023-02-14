//Q6 - Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of  a : ";
    cin>>a;
    cout<<"Enter vakue of  b : ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Reversed Values : \n";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b;

}