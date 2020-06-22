#include<iostream>

using namespace std;
int main()
{
    int n,val,a,b,c,d;
    a=b=c=d=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        if(val%2==0) a++;
        if(val%3==0) b++;
        if(val%4==0) c++;
        if(val%5==0) d++;
    }
    cout<<a<<" Multiplo(s) de 2"<<endl;
    cout<<b<<" Multiplo(s) de 3"<<endl;
    cout<<c<<" Multiplo(s) de 4"<<endl;
    cout<<d<<" Multiplo(s) de 5"<<endl;

    return 0;
}
