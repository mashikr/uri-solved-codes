#include<iostream>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    if(a.size()>80)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    return 0;
}

