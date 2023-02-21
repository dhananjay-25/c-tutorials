//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;
int main()
{
    int a,n1,n2,n3,n4,n5,s;
    cout<<"Enter a value: ";
    cin>>a;
    n1=a/10000;
    a=a%10000;
    n2=a/1000;
    a=a%1000;
    n3=a/100;
    a=a%100;
    n4=a/10;
    a=a%10;
    cout<<"Sum = "<<n1+n4;
    return 0;
}