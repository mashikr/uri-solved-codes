#include <iostream>

using namespace std;

int main() {

    int count=0,i;
    string a;
    cin>>a;
    for(i=0; i<a.size(); i++){
        if(a[i]=='1') count++;
    }
    if(count%2==0) a+='0';
    else a+='1';
    cout<<a<<endl;

    return 0;
}

