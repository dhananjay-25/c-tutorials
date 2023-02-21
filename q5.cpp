//Q5 - Write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;
int main()
{
    int n,a1,a2,a3,s;
    cout<<"Enter a 3 digit number: ";
    cin>>n;
    a1 = n/100;
    n=n%100;
    a2 = n/10;
    n=n%10;
    a3=n;
    s=a1+a2+a3;
    cout<<"Sum of digits = "<<s;
    return 0;
}