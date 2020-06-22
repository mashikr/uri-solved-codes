#include<iostream>
using namespace std;
int main()
{
	int h,m,time;
	char a;
	while(scanf("%d%c%d",&h,&a,&m)!=EOF){
		h+=1;
		if(h<8) time=0;
		else time=((h-8)*60)+m;

		cout<<"Atraso maximo: "<<time<<endl;
	}
	return 0;
}
