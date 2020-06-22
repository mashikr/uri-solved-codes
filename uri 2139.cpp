#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int m,d,day;
    while(scanf("%d%d",&m,&d) != EOF){
        if(m==12){
            if(d==25)
                cout<<"E natal!"<<endl;
            else if(d>25)
                cout<<"Ja passou!"<<endl;
            else
                cout<<"E vespera de natal!"<<endl;
        }
        else{
            if(m==11)
              day=25+(30-d);
            else if(m==10)
                day=25+30+(31-d);
            else if(m==9)
                day=25+30+31+(30-d);
            else if(m==8)
                day=25+30+31+30+(31-d);
            else if(m==7)
                day=25+30+31+30+31+(31-d);
            else if(m==6)
                day=25+30+31+30+31+31+(30-d);
            else if(m==5)
                day=25+30+31+30+31+31+30+(31-d);
            else if(m==4)
                day=25+30+31+30+31+31+30+31+(30-d);
            else if(m==3)
                day=25+30+31+30+31+31+30+31+30+(31-d);
            else if(m==2)
                day=25+30+31+30+31+31+30+31+30+31+(29-d);
            else if(m==1)
                day=25+30+31+30+31+31+30+31+30+31+29+(31-d);

                cout<<"Faltam "<<day<<" dias para o natal!"<<endl;
        }
    }
    return 0;
}
