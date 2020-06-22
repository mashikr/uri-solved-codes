#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) !=EOF){
        int x;
        x=n/3;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j && (i+j)==(n-1))
                    cout<<"4";
                else if(i>=x && j>=x && i<(n-x) && j<(n-x))
                    cout<<"1";
                else if(i==j)
                    cout<<"2";
                else if((i+j)==(n-1))
                    cout<<"3";
                else
                    cout<<"0";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
