#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    double v,r,area;
    while(scanf("%lf %lf",&v,&r)!=EOF){
        area = (3.14*r*r)/4;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",v/area,area);
    }
    return 0;
}
