#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    int n,i,val;
    float sum;
    while(scanf("%d",&n) != EOF){
        sum=0;
        for(i=0; i<n; i++){
           cin>>val;
           if(val==1) sum++;
        }
        if(((float)n*2)/3 <= sum)
            cout<<"impeachment"<<endl;
        else cout<<"acusacao arquivada"<<endl;
    }

    return 0;
}
