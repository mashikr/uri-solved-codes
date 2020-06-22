#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long int n;
    double x,y;
    cin>>n;
    x=n/log(n);
    y=x*1.25506;

    printf("%.1lf %.1lf\n",x,y);
    return 0;
}

