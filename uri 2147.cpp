#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    string a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        printf("%.2f\n",a.size()*0.01);
    }

    return 0;
}
