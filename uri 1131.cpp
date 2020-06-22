#include<iostream>
using namespace std;
int main()
{
    int choice,in,gr,total=1,inW=0,grW=0,draw=0;
    cin>>in>>gr;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    while(1){
        if(in>gr)
            inW++;
        else if(in<gr)
            grW++;
        else
            draw++;

        cin>>choice;
        if(choice==1){
           cin>>in>>gr;
           cout<<"Novo grenal (1-sim 2-nao)"<<endl;
           total++;
        }
        else
            break;
    }
    cout<<total<<" grenais\n"<<"Inter:"<<inW<<"\nGremio:"<<grW<<"\nEmpates:"<<draw<<endl;
    if(inW>grW)
        cout<<"Inter venceu mais"<<endl;
    else if(inW<grW)
        cout<<"Gremio venceu mais"<<endl;
    else
        cout<<"Não houve vencedor"<<endl;
}
