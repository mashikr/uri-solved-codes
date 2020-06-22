#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    int n,i,val,key;
    char c,op;
    string name,result;

    while(scanf("%d",&n) != EOF){
        int arr[n][3];
        string starr[n];
        result="";
       for(i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1]>>c>>arr[i][2];
       }

       key=0;
       for(i=0; i<n; i++){
        //key2=0;
        cin>>name>>val>>op;
        val--;
        if(op=='+'){
            if(arr[val][0]+arr[val][1]==arr[val][2])
            {
                key++;
                starr[val]="0";
            }
            else starr[val]=name;
        }
        else if(op=='-'){
            if(arr[val][0]-arr[val][1]==arr[val][2])
            {
                key++;
                starr[val]="0";
            }
            else starr[val]=name;
        }
        else if(op=='*'){
            if(arr[val][0] * arr[val][1]==arr[val][2])
            {
                key++;
                starr[val]="0";
            }
            else starr[val]=name;
        }
        else {
                if(arr[val][0]+arr[val][1]==arr[val][2] || arr[val][0]-arr[val][1]==arr[val][2] || arr[val][0] * arr[val][1]==arr[val][2]){
                   starr[val]=name;
                }
                else{
                   key++;
                   starr[val]="0";
                }
        }
       }

       if(key==n) cout<<"You Shall All Pass!"<<endl;
       else if (key==0) cout<<"None Shall Pass!"<<endl;
       else{
            int tm=0;
        for(int j=0; j<n; j++){
            if(tm==0 && starr[j]!="0"){
                result+=starr[j];
                tm++;
            }
            else if(starr[j]!="0")result+=" " + starr[j];
        }
        cout<<result<<endl;
       }
    }

    return 0;
}
