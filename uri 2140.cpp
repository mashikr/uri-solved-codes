#include<iostream>

using namespace std;

int main()
{
    int n,m,cont;
   while(1){
        cin>>n>>m;
    if(n==0 && m==0)
        break;
    else{
        m-=n;
        cont=0;
        if(m>=100){m-=100; cont++;}
        if(m>=50){m-=50; cont++;}
        if(m>=20){m-=20; cont++;}
        if(m>=10){m-=10; cont++;}
        if(m>=5){m-=5; cont++;}
        if(m>=2){m-=2; cont++;}

        if(m==0 && cont==2) cout<<"possible"<<endl;
        else cout<<"impossible"<<endl;
    }
   }
   return 0;
}
