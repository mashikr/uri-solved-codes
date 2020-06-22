#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {

    int n,i,j;
    double x,val,sum,sum2,max,min;
    string str;
    cin>>n;

    for(i=0; i<n; i++){
        sum=0;
       cin>>str;
       cin>>x;
       cin>>val;
       max=min=val;
       sum+=val;
       for(j=1; j<7; j++){
            cin>>val;
            if(val>max) max=val;
            if(val<min) min=val;
            sum+=val;
       }
       sum=sum-(max+min);
       sum*=x;
       cout<<str<<" ";
       printf("%.2lf\n",sum);
    }

    return 0;
}
