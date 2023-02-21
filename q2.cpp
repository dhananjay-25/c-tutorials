//Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter values of a and b : ";
    cin>>a>>b;
    c= a<50 && a<b;
    cout<<c;
    return 0;
}