#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int e;
    int mliko;

    printf("Unesi kapacitet posudice a:\n");
    scanf("%d", &a);
    printf("Unesi kapacitet posudice b:\n");
    scanf("%d", &b);
    printf("Unesi kapacitet posudice c:\n");
    scanf("%d", &c);
    printf("Unesi kapacitet posudice d:\n");
    scanf("%d", &d);
    printf("Unesi kapacitet posudice e:\n");
    scanf("%d", &e);
    printf("Unesi kapacitet mlijeka:\n");
    scanf("%d", &mliko);

    if(mliko>=a){
        a=a;
        mliko-=a;
    }else {a=mliko; mliko=0;}

    if(mliko>=b){
        b=b;
        mliko-=b;
    }else {b=mliko; mliko=0;}

      if(mliko>=c){
        c=c;
        mliko-=c;
    }else {c=mliko; mliko=0;}

      if(mliko>=d){
        d=d;
        mliko-=d;
    }else {d=mliko; mliko=0;}

      if(mliko>=e){
        e=e;
        mliko-=e;
    }else {e=mliko; mliko=0;}

    printf("%d %d %d %d %d", a,b,c,d,e);

