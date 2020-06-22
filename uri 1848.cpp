#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int sum=0,n=0;
    while(n<3){
        getline(cin,a);
        if(a!="caw caw"){
            if(a=="---")
                sum+=0;
            else if(a=="--*")
                sum+=1;
            else if(a=="-*-")
                sum+=2;
            else if(a=="-**")
                sum+=3;
            else if(a=="*--")
                sum+=4;
            else if(a=="*-*")
                sum+=5;
            else if(a=="**-")
                sum+=6;
            else if(a=="***")
                sum+=7;
        }
        else{
          cout<<sum<<endl;
          sum=0;
          n++;
        }
    }
    return 0;
}
