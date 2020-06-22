#include<iostream>

using namespace std;

int main()
{
    long long int n,t;
    cin>>n;
    while(n>0){
       cin>>t;
       if(t>=2015)
            cout<<t-2014<<" A.C."<<endl;
       else
        cout<<2015-t<<" D.C."<<endl;
       n--;
    }
    return 0;
}

