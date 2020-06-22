#include<iostream>
using namespace std;
int main()
{
    int day1,h1,m1,s1,day2,h2,m2,s2,temp=0,rday,rh,rm,rs;
    string str;
    cin>>str>>day1;
    cin>>h1>>str>>m1>>str>>s1;
    cin>>str>>day2;
    cin>>h2>>str>>m2>>str>>s2;

    if(s2>=s1){
        rs=s2-s1;
    }
    else{
        rs=(s2-s1)+60;
        temp=1;
    }
    if(temp==1){
        m1++;
        if(m2>=m1){
            rm=m2-m1;
            temp=0;
        }
        else{
            rm=(m2-m1)+60;
            temp=1;
        }
    }
    else{
        if(m2>=m1){
            rm=m2-m1;
            temp=0;
        }
        else{
            rm=(m2-m1)+60;
            temp=1;
        }
    }

    if(temp==1){
        h1++;
        if(h2>=h1){
            rh=h2-h1;
            temp=0;
        }
        else{
            rh=(h2-h1)+24;
            temp=1;
        }
    }
    else{
        if(h2>=h1){
            rh=h2-h1;
            temp=0;
        }
        else{
            rh=(h2-h1)+24;
            temp=1;
        }
    }
    if(temp==1){
        day1++;
        rday=day2-day1;
    }
    else{
        rday=day2-day1;
    }

    cout<<rday<<" dia(s)\n"<<rh<<" hora(s)\n"<<rm<<" minuto(s)\n"<<rs<<" segundo(s)"<<endl;
    return 0;
}
