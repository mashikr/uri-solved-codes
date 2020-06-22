#include <iostream>

using namespace std;

int main() {

    int a,b,c,eq,sc,iso;
    eq=sc=iso=0;
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        if(a==b && b==c) eq=1;
        else if(a==b || b==c || c==a) iso=1;
        else sc=1;

        if(eq==1) cout<< "Valido-Equilatero"<<endl;
        else if(sc==1) cout<<"Valido-Escaleno"<<endl;
        else if(iso==1) cout<<"Valido-Isoceles"<<endl;

        if( (a*a)==(b*b + c*c) || (b*b)==(a*a + c*c) || (c*c)==(a*a + b*b)){
            cout<<"Retangulo: S"<<endl;
        }
        else cout<<"Retangulo: N"<<endl;

    }
    else {cout<<"Invalido"<<endl;}



    return 0;
}

