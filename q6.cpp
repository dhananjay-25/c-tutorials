//- Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Sum =  "<<a+b<<endl;
    cout<<"difference =  "<<a-b<<endl;
    cout<<"Product = "<<a*b<<endl;
    float s = float(a)/float(b);
    cout<<"division =  "<<s<<endl;
    cout<<"Reminder =  "<<a%b<<endl;
}