#include <iostream>
//#include<string.h>

using namespace std;

int main() {

    int i,n;
    string a="Feliz nat";
    cin>>n;
    for(i=0; i<n; i++)
        a+="a";
    a+="l!";

    cout<<a<< endl;

    return 0;
}
