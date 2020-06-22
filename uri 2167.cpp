#include<iostream>

using namespace std;

int main()
{
    int n,val,pos=0,x=0,z=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>val;
        if(val<x && z==1){pos=i; z=0;}
        x=val;
    }
    cout<<pos<<endl;

    return 0;
}

