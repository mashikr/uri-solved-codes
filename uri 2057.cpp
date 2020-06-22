#include<iostream>

using namespace std;
int main()
{
    int s,t,f;
    cin>>s>>t>>f;
    s += t+f;
    if(s>=24) cout<<s-24<<endl;
    else if(s<0) cout<<24+s<<endl;
    else cout<<s<<endl;

    return 0;
}
