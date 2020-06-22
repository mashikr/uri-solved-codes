#include <iostream>

using namespace std;

int main()
{

    string a;
    getline(cin,a);
    if(a.size()>140) cout<<"MUTE"<<endl;
    else cout<<"TWEET"<<endl;

    return 0;
}

