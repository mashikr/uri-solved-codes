#include<iostream>
using namespace std;

int main()
{
   int n,val;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>val;
        if(val%2==0)
            cout<<"0"<<endl;
        else
           cout<<"1"<<endl;
    }
    return 0;
}
