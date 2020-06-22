#include<stdio.h>
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            int sum=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<a+(2*b);j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
