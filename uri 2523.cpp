#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    char a[26];
    int n,i,val;
    while(scanf("%s",a) != EOF){

        cin>>n;
        string b="";
        for(i=0; i<n; i++){
            cin>>val;
            b+=a[val-1];
        }
        cout<<b<<endl;
    }

    return 0;
}
