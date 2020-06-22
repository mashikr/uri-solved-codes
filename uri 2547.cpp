#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
    int n,max,min,val,count;

    while(scanf("%d",&n) != EOF){
        count=0;
        cin>>min>>max;
        for(int i=0; i<n; i++){
            cin>>val;
            if(val>=min && val<=max) count++;
        }
        cout<<count<<endl;
    }

    return 0;
}

