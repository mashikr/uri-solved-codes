#include<stdio.h>
int main()
{
    int i;
    float sum=0,j,x=1;
    for(i=3;i<101;i++){
        if (i%2!=0){
        j=i;
        x=x*2;
        sum=sum+(i/x);
    }
    }
     printf("%.2f\n",sum+1);
    return 0;
}
