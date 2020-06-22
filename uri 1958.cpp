#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
	long double X;
    char s[120];
    scanf("%LE", &X);
    sprintf(s,"%LE", X);
    if(s[0] != '-') printf("+");
    printf("%.4LE\n", X);
    return 0;
}
