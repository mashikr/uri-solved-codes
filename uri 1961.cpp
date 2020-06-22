#include<iostream>

using namespace std;

int main()
{
    int p,n,s=0,val,ex,zz;
    cin>>p>>n;
    cin>>val;
    ex=val;
    for(int i=1; i<n; i++){
        cin>>val;
        zz=val>ex?val-ex:ex-val;
        if(zz>p)s++;
        ex=val;
    }
    if(s>0)
        cout<<"GAME OVER"<<endl;
    else
        cout<<"YOU WIN"<<endl;

    return 0;
}

