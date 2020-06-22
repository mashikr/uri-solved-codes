#include <stdio.h>
int main()
{
    double i,j;
    for (i=0;i<=1.8;i=i+0.2){
            for (j=i+1;j<=i+3.2;j++){
                if (i==0 || i==1.0|| j==3||j==4||j==5){
                    printf("I=%.0lf J=%.0lf\n",i,j);
                }
                else{
               printf("I=%.1lf J=%.1lf\n",i,j);
                }
            }
    }
   for(j=3;j<6;j++){
    printf("I=2 J=%.0lf\n",j);
   }
    return 0;
}
