#include<stdio.h>
int main()
{
    float sum=0;
    int cont=0;
   while(1){
    int a;
    scanf("%d",&a);
    if(a<0){
        break;
    }
    else{
        sum=sum+a;
        cont+=1;
    }
   }

   printf("%.2f\n",sum/cont);
}
