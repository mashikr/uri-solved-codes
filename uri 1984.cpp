#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    for(int i=a.size(); i>0; i--){
        b += a[i-1];
    }
    cout<<b<<endl;

    return 0;
}
