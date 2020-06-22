#include <iostream>
#include<stdio.h>

using namespace std;

int main() {
    int n;
    float time,dis,avg;

    while(scanf("%d",&n) != EOF){
          avg=0;
        for(int i=0; i<n; i++){
           cin>>time>>dis;
           if(dis/time > avg){
            cout<<i+1<<endl;
            avg=dis/time;
           }
        }
    }

    return 0;
}


