#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    int n,i,x,y;
    double sum1,sum2;
    while(scanf("%d",&n) != EOF){
        sum1=sum2=0;
        for(i=0; i<n; i++){
           cin>>x>>y;
           sum1+= x*y;
           sum2+=y;
        }
        sum1=sum1/(sum2*100);
        printf("%.4lf\n",sum1);
    }


    return 0;
}
