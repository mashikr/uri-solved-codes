#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    int n,i,id,val,id2,cont;
    while(scanf("%d",&n) != EOF){
        cont=0;
        cin>>id;
        for(i=0; i<n; i++){
            cin>>id2>>val;
            if(id2==id && val==0) cont++;
        }
        cout<<cont<<endl;
    }

    return 0;
}

