#include <iostream>

using namespace std;

int main() {

    long int x,y;
    while(1){
        cin>>x>>y;
        if(x==0 && y==0) break;
        else{
            cout<<x*y<<endl;
        }
    }

    return 0;
}
