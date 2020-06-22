#include<iostream>

using namespace std;

int main()
{
    char Digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    long long int x, div=1, val,cont=0,i;
    int arr[64];
    cin>>x;

    while(x!=0){
        arr[cont]=x%16;
        x=x/16;
        cont++;
    }
    for(i=cont-1; i>=0; i--){
        val=arr[i];
        cout<<Digit[val];
    }
    cout<<endl;
    return 0;
}
