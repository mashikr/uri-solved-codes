#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    while(1){
        int n,x,y;
        cin>>n;
        int arr[n][n];
        if(n==0)
            break;
        else{
            if(n%2==0){
                x=n/2;
                y=x;
            }
            else{
                double m=n;
               x=ceil(m/2);
               y=x-1;
            }
            int i,j,k,cont=-2;
            for(i=0;i<x;i++){
                k=1;
                cont++;
                for(j=0;j<x;j++){
                    arr[i][j]=k;
                    if(j<=cont){
                        k++;
                    }
                }

            }

        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                arr[i][n-j-1]=arr[i][j];
            }
        }


        for(i=0;i<x;i++){
            for(j=0;j<n;j++){
                arr[n-i-1][j]=arr[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j==0)
                    cout<<setw(3)<<arr[i][j];
                else
                    cout<<" "<<setw(3)<<arr[i][j];
            }
            cout<<endl;
        }
             cout<<endl;
        }
    }

    return 0;
}
