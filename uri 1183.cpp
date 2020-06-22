#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,x,cont=0;
    float arr[12][12];
    float sum=0.0;
    char ch;

    cin>>ch;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>arr[i][j];
            if(j<i){
                sum+=arr[i][j];
                cont++;
            }
        }
    }

    if(ch=='S'){
        printf("%.1f\n",sum);
    }
    else if(ch=='M'){
        printf("%.1f\n",sum/cont);
    }

   return 0;
}

