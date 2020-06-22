#include <iostream>

using namespace std;

int main() {

    int n,x,y;
    string ab[11]={"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        cout<<ab[x+y]<<endl;
    }

    return 0;
}

