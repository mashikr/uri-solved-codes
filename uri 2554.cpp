#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n,m,val,cont,key,key2;
    string date,result;
    while(scanf("%d%d",&n,&m) != EOF){
        key=key2=0;
       for(int i=0; i<m; i++){
        cont=0;
        cin>>date;
        for(int j=0; j<n; j++){
            cin>>val;
            if(val==1) cont++;
        }
        if(cont==n && key2==0){ result=date; key=key2=1;}
       }
       if(key==0) cout<<"Pizza antes de FdI"<<endl;
       else cout<<result<<endl;
    }

    return 0;
}
