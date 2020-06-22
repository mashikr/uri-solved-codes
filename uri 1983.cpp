#include<iostream>
using namespace std;
int main()
{
	int n,id,result,i;
	float x,temp;
	cin>>n;
	cin>>id>>x;
	result=id;
	temp=x;
	for (i=1; i<n; i++){
    	cin>>id>>x;
		if(x>temp){
			result=id;
			temp=x;
		}
	}
	if(temp>=8) cout<<result<<endl;
	else cout<<"Minimum note not reached"<<endl;
}