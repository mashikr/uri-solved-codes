#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i+j)==(n-1))
                   k=2;
                else if(i==j)
                    k=1;
                else
                    k=3;
                cout<<k;
            }
            cout<<endl;
        }


    }

    return 0;
}

