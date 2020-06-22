#include<stdio.h>
int main()
{
    double N,h,f,t,tn,fi,tw,o,hf,tw5,tnp,fv,op;
    int h1,f1,t1,tn1,fi1,tw1,o1,hf1,tw51,tnp1,fv1,op1;
    scanf("%lf",&N);
    printf("NOTAS:\n");
    h=N/100;
    h1=h;
    printf("%d nota(s) de R$ 100.00\n",h1);
    f=(N-(h1*100))/50;
    f1=f;
    printf("%d nota(s) de R$ 50.00\n",f1);
    t=(N-(h1*100+f1*50))/20;
    t1=t;
    printf("%d nota(s) de R$ 20.00\n",t1);
    tn=(N-(h1*100+f1*50+t1*20))/10;
    tn1=tn;
    printf("%d nota(s) de R$ 10.00\n",tn1);
    fi=(N-(h1*100+f1*50+t1*20+tn1*10))/5;
    fi1=fi;
    printf("%d nota(s) de R$ 5.00\n",fi1);
    tw=(N-(h1*100+f1*50+t1*20+tn1*10+fi1*5))/2;
    tw1=tw;
    printf("%d nota(s) de R$ 2.00\n",tw1);

    printf("MOEDAS:\n");
    o=(N-(h1*100+f1*50+t1*20+tn1*10+fi1*5+tw1*2))/1;
    o1=o;
    printf("%d moeda(s) de R$ 1.00\n",o1);
    hf=(N-(h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1))/0.50;
    hf1=hf;
    printf("%d moeda(s) de R$ 0.50\n",hf1);
    tw5=(N-(h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50))/0.25;
    tw51=tw5;
    printf("%d moeda(s) de R$ 0.25\n",tw51);
    tnp=(N-(h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50+tw51*0.25))/0.10;
    tnp1=tnp;
    printf("%d moeda(s) de R$ 0.10\n",tnp1);

    printf("%lf test\n",h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50+tw51*0.25);
    printf("%lf test\n",tnp);

    fv=(N-(h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50+tw51*0.25+tnp1*0.10))/0.05;
    fv1=fv;
    printf("%d moeda(s) de R$ 0.05\n",fv1);

    printf("%lf test\n",h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50+tw51*0.25+tnp1*0.10);
    printf("%lf test\n",fv);

    op=(N-(h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50+tw51*0.25+tnp1*0.10+fv1*0.05))/0.01;
    op1=op;
    printf("%d moeda(s) de R$ 0.01\n",op1);

    printf("%lf test\n",h1*100.0+f1*50.0+t1*20.0+tn1*10.0+fi1*5.0+tw1*2.0+o1+hf1*0.50+tw51*0.25+tnp1*0.10+fv1*0.05);
    printf("%lf test\n",op);

    return 0;
}
