//Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n>0)
        cout<<"Positive number entered is: "<<n;
    else    
        cout<<"Number is negative and is skipped";
    return 0;
}