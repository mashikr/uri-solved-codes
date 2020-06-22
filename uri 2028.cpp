#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,cont=0,total,i,j;
	while(scanf("%d",&n)!=EOF){
		cont++;
		total=(n*(n+1)/2)+1;
		if(n==0) cout<<"Caso "<<cont<<": "<<total<<" numero"<<endl;
		else cout<<"Caso "<<cont<<": "<<total<<" numeros"<<endl;
		cout<<"0";
		for(i=0; i<=n; i++){
			for(j=0; j<i; j++){
				cout<<" "<<i;
			}
		}
		cout<<endl<<endl;
	}
	return 0;
}
