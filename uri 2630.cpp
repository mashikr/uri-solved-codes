#include <iostream>

using namespace std;

int main() {

    int n,i,a,b,c,result;
    string ab;
    cin>>n;
    for(i=0; i<n; i++){
       cin>>ab;
       cin>>a>>b>>c;
       if(ab=="max"){result=max(a,max(b,c));}
       else if(ab=="min"){result=min(a,min(b,c));}
       else if(ab=="mean"){result=(a+b+c)/3;}
       else {
        result=0.30*a + 0.59*b + 0.11*c;
       }

        cout<<"Caso #"<<i+1<<": "<<result<<endl;
    }


    return 0;
}
