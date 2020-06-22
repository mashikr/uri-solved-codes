#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    double arr[12][12];
    double sum=0.0;
    char ch;

    cin>>ch;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>arr[i][j];
            if(j>i && (i+j)>11){
                sum+=arr[i][j];
            }
        }
    }

    if(ch=='S'){
        printf("%.1f\n",sum);
    }
    else if(ch=='M'){
        printf("%.1f\n",sum/30.0);
    }

   return 0;
}

