#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b;
    c=((b-a)/a)*100;
    printf("%.2lf%c\n",c,'%');

    return 0;
}
