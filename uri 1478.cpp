#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,i,j;
    while(1){
        cin>>n;
        int arr[n][n];
        if(n==0)
            break;
        else{
            for(i=0;i<n;i++){
               for(j=0;j<n;j++){
                    if((i-j)<0)
                        arr[i][j]=-(i-j)+1;
                    else
                        arr[i][j]=i-j+1;
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

