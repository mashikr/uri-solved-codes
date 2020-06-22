#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    int m,n,i,j,a,b,x,y,val;
    while(scanf("%d %d",&m,&n) != EOF){
        for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin>>val;
            if(val==2){a=i; b=j;}
            else if(val==1){x=i; y=j;}
        }
    }
    m = a>x? a-x : x-a;
    n = b>y? b-y : y-b;

    cout<<m+n<<endl;
    }


    return 0;
}
