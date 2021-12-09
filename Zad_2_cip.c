#include <stdio.h>

void main(){
    int strA;
    int strB;
    int strC;
    printf("Unesi stranicu\n");
    scanf("%d %d %d",&strA,&strB,&strC);
    printf("Volumen je %d cm^3", strA*strB*strC);
}
