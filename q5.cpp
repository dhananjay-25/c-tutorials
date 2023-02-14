//q5 - Write a C++ program to find size of basic data types.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Size of fundamental data types : \n";
    cout<<"The sizeof char : "<<sizeof(char)<<" bytes \n";
    cout<<"The sizeof short : "<<sizeof(short)<<" bytes \n";
    cout<<"The sizeof int : "<<sizeof(int)<<" bytes \n";
    cout<<"The sizeof long : "<<sizeof(long)<<" bytes \n";
    cout<<"The sizeof long long : "<<sizeof(long long)<<" bytes \n";
    cout<<"The sizeof float : "<<sizeof(float)<<" bytes \n";
    cout<<"The sizeof double : "<<sizeof(double)<<" bytes \n";
    cout<<"The sizeof long double : "<<sizeof(long double)<<" bytes \n";
    cout<<"The sizeof bool : "<<sizeof(bool)<<" bytes \n";

    // The sizeof(short) : 2 bytes
    // The sizeof(int) : 4 bytes
    // The sizeof(long): 4 bytes
    // The sizeof(long long) : 8 bytes
    // The sizeof(float) : 4 bytes
    // The sizeof(double) : 8 bytes
    // The sizeof(long double) : 12 bytes
    // The sizeof(bool) : 1 bytes
}