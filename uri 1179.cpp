#include<iostream>
using namespace std;
void opar(int par[],int i)
{
   for(int j=0;j<i;j++){
    cout<<"par["<<j<<"] = "<<par[j]<<endl;
   }
}
void oimpar(int impar[], int i)
{
    for(int j=0;j<i;j++){
    cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
   }
}
int main()
{
    int i=0,n,x=0,y=0,a=0,b=0;
    int par[5],impar[5];
    while(i<15){
        cin>>n;
        if(n%2==0){
            par[x]=n;
            x++;
            if(x==5){
                opar(par,x);
                x=0;
                a++;
            }
        }
        else{
            impar[y]=n;
            y++;
            if(y==5){
                oimpar(impar,y);
                y=0;
                b++;
            }
        }
        i++;
    }
    if(b<3)
        oimpar(impar,y);
    if(a<3)
        opar(par,x);
    return 0;
}
