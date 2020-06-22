#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,i,m,k;
    while(scanf("%d", &n)!=EOF){
        k=0;
        for(i=0;i<n;i++){
            cin>>m;
            if(k<m)
                k=m;
        }
        if(k<10)
            cout<<"1"<<endl;
        else if(k>=10 && k<20)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;

    }
    return 0;
}

