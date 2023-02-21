//There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
#include<iostream>
using namespace std;
int main()
{
    int t,b,g;
    b=17;
    t = 80*45/100;
    g=t-b;
    cout<<"girls with A grade = "<<g;
    return 0;
}