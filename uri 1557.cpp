#include<iostream>
using namespace std;

int len(int x)
{
    int a=x,b=0;
    while(a){
        a/=10;
        b++;
    }
    return b;
}
int main()
{

   while(1){
       int n,i,j,k,x=0,t=0,p=0,l=0,m;
        cin>>n;
        if(n==0)
            break;
        else{
            int arr[n][n];
            k=1;
            for(i=0;i<n;i++){
                x=k;
                for(j=0;j<n;j++){
                    arr[i][j]=x;
                    x*=2;
                }
                k*=2;
            }
            t=len(arr[n-1][n-1]);

            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                   l=t-len(arr[i][j]);
                   if(j==0){
                    for(int z=0;z<l; z++)
                        cout<<" ";
                        cout<<arr[i][j];
                   }
                   else{
                    for(int z=0;z<=l; z++)
                        cout<<" ";
                        cout<<arr[i][j];
                   }
                }
                cout<<endl;
            }
            cout<<endl;
        }
   }
   return 0;
}
