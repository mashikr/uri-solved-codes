#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string val;
    cin>>val;
    if(val == "vertebrado"){
        cin>>val;
        if(val == "ave"){
            cin>>val;
            if(val == "carnivoro")
                cout<<"aguia"<<endl;
            else if(val == "onivoro")
                cout<<"pomba"<<endl;
        }
        else if(val == "mamifero"){
            cin>>val;
            if(val == "onivoro")
                cout<<"homem"<<endl;
            else if(val == "herbivoro")
                cout<<"vaca"<<endl;
        }
    }
    else if(val == "invertebrado"){
        cin>>val;
        if(val == "inseto"){
            cin>>val;
            if(val == "hematofago")
                cout<<"pulga"<<endl;
            else if(val == "herbivoro")
                cout<<"lagarta"<<endl;
        }
        else if(val == "anelideo"){
            cin>>val;
            if(val == "hematofago")
                cout<<"sanguessuga"<<endl;
            else if(val == "onivoro")
                cout<<"minhoca"<<endl;
        }
    }
    return 0;
}
