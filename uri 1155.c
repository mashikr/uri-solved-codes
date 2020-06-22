#include<stdio.h>
int main()
{
    int i;
    float sum=0,j;
    for(i=1;i<101;i++){
        j=i;
        sum=sum+(1/j);
    }
     printf("%.2f\n",sum);
    return 0;
}
