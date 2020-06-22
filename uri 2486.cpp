#include <iostream>

using namespace std;

int main() {

    int n,i,val,sum;
    string a;
    while(1){
        cin>>n;
        if (n==0) break;
        else{
            sum=0;
            for(i=0; i<n; i++){
                cin>>val;
                getline(cin,a);

                if(a==" suco de laranja") sum+=120*val;
                else if(a==" morango fresco") sum+=85*val;
                else if(a==" mamao") sum+=85*val;
                else if(a==" goiaba vermelha") sum+=70*val;
                else if(a==" manga") sum+=56*val;
                else if(a==" laranja") sum+=50*val;
                else sum+=34*val;
            }
            if(sum>130) cout<<"Menos "<<sum-130<<" mg"<<endl;
            else if(sum<110) cout<<"Mais "<<110-sum<<" mg"<<endl;
            else cout<<sum<<" mg"<<endl;
        }
    }

    return 0;
}

