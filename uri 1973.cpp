#include <iostream>

using namespace std;

int main() {

    int n,x=1,val,i,count=0,sum=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>val;
        if(val%2!=0 && x==1){
            count++;
        }
        else x=0;
        sum+=val;
    }
    if(count<n){
        cout<<count+1<<" "<<sum-(count*2)<<endl;
    }
    else{
        cout<<count<<" "<<sum-count<<endl;
    }

    return 0;
}

