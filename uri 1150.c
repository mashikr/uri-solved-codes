#include<stdio.h>
int main()
{
    int x,y,count=0,i,sum=0;
    scanf("%d",&x);
    while(1){
        scanf("%d",&y);
        if (y>x)
        break;
    }
    for(i=x; ;i++){
       sum+=i;
       count+=1;
       if(sum>y)
        break;
    }
    printf("%d\n",count);
}
