#include <string.h>
#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    int cas=0;
    while(scanf("%s%s",s1,s2) != EOF){
       int i=0,l1,l2,cont=0,pos;
       l1=s1.size();
       l2=s2.size();

       while(i<=l2){
        s3=s2.substr(i,l1);
        cout<<s3<<endl;
        if(s3==s1){
            cont++;
            pos=i+1;
            i+=l1-1;
        }
        i++;
        cout<<"lalala "<<i<<endl;
       }
       cas++;
       cout<<"Caso #"<<cas<<":"<<endl;
       if(cont==0) cout<<"Nao existe subsequencia"<<endl;
       else{
        cout<<"Qtd.Subsequencias: "<<cont<<endl;
        cout<<"Pos: "<<pos<<endl;
       }
       cout<<endl;
    }

}
