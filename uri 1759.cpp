#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    k=n;
    while(n){
        if(n==1)
            cout<<" Ho!"<<endl;
        else if(n==k)
            cout<<"Ho";
        else
            cout<<" Ho";
        n--;
    }
    return 0;
}
