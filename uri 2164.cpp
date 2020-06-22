#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{

    int n;
    double x,y;
    cin>>n;
    x=(1+sqrt(5))/2;
    y=(1-sqrt(5))/2;
    x=pow(x,n);
    y=pow(y,n);
    x=(x-y)/sqrt(5);
    printf("%.1lf\n",x);

    return 0;
}
