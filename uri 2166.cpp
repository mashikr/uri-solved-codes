#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    double res=0;
    cin>>n;
    for(int i=1; i<=n; i++){
      if(i==1) res=(1/2)+2;
      if(i==n) res=1/res;
      else res=(1/res)+2;
    }
    res+=1;

    printf("%.10lf\n",res);

    return 0;
}
