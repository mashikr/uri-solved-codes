#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

    int n,i,s,b,a,s1,b1,a1;
    double sum1,sum2,sum3,sum4,sum5,sum6;
    sum1=sum2=sum3=sum4=sum5=sum6=0;
    string ab;
    cin>>n;

    for(i=0; i<n; i++){
       cin>>ab;
       cin>>s>>b>>a;
       cin>>s1>>b1>>a1;
       sum1+=s;
       sum2+=b;
       sum3+=a;
       sum4+=s1;
       sum5+=b1;
       sum6+=a1;
    }
    double x,y,z;
    x=(sum4/sum1)*100;
    y=(sum5/sum2)*100;
    z=(sum6/sum3)*100;

    printf("Pontos de Saque: %.2lf %c.\n",x,'%');
    printf("Pontos de Bloqueio: %.2lf %c.\n",y,'%');
    printf("Pontos de Ataque: %.2lf %c.\n",z,'%');

    return 0;
}
