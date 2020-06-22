#include<iostream>
using namespace std;

int main()
{
    int n,val,x,z;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>val;
        if(i==0){
            x=val;
            z=1;
        }
        else
            if(val<x){
                x=val;
                z=i+1;
            }
    }
    cout<<z<<endl;
    return 0;
}
