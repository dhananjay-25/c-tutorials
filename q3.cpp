//Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.
#include<iostream>
using namespace std;
int main()
{
    int l,b,r;
    cout<<"Enter lenght of rectangle: "; cin>>l;
    cout<<"Enter breadth of rectangle: "; cin>>b;
    r=l*b;
    cout<<"Area of rectangle is sides "<<l<<" & "<<b<<" is "<<r;
    return 0;
}