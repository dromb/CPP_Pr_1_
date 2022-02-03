#include<stdio.h>

int main()
{
    int a;
    int b;
    int l;

    printf("Unesite duljinu stranice, unesite visinu stranice i duljinu zekee\n");
    scanf("%d %d %d", &a, &b, &l);

    int O=2*a+2*b;
    int S=1*3;
    int skok=ceil(O/S);
    int t=skok+3*(skok-2);
    printf("%d\n", t);


}
