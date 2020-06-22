#include<stdio.h>
int main()
{
    int arr1[20],arr2[20];
    int i,j;
    for(i=0,j=19;i<20;i++,j--){
        scanf("%d",&arr1[i]);
        arr2[j]=arr1[i];
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,arr2[i]);
    }
    return 0;
}
