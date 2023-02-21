//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.
#include<iostream>
using namespace std;
int main()
{
    float r,a,b;
    char c;
    cout<<"Enter an operator for operation (+,-,*,/): ";
    cin>>c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    switch(c)
    {
        case '+':
        r=a+b;
        cout<<"Sum = "<<r;
        break;
        case '-':
        r=a-b;
        cout<<"Difference = "<<r;
        break;
        case '*':
        r=a*b;
        cout<<"Product = "<<r;
        break;
        case '/':
        r=a/b;
        cout<<"Division = "<<r;
        break;
        default:
        cout<<"Invalid operation";
    }
    return 0;
}