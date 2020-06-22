#include<iostream>;
using namespace std;
int main()
{
	int x,n,cont=0;
	cin>>x;
	for(int i=0; i<5; i++){
		cin>>n;
		if(n==x) cont++;
	}
	cout<<cont<<endl;
	
	return 0;
}