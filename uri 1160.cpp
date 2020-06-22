#include<iostream>
using namespace std;
int main()
{
    int n,pa,pb,cont;
    double g1,g2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pa>>pb>>g1>>g2;
        cont=0;
        while(pa<=pb){
            pa+=(g1/100)*pa;
            pb+=(g2/100)*pb;
            cont++;
            if(cont>100){
                 cout<<"Mais de 1 seculo."<<endl;
                 break;
            }
        }
        if(cont<101)
            cout<<cont<<" anos."<<endl;
    }
}
