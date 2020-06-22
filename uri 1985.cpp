#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,id,am;
	double sum=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>id>>am;
		if(id==1001) sum+=am*1.5;
		else if(id==1002) sum+=am*2.5;
		else if(id==1003) sum+=am*3.5;
		else if(id==1004) sum+=am*4.5;
		else if(id==1005) sum+=am*5.5;
	}
	printf("%.2lf\n",sum);

	return 0;
}
