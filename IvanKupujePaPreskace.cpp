#include <stdio.h>
#include <math.h>

int main(){

    int item, ivanItem, count=0, flag=0;
    scanf("%d",&ivanItem);

    do{
        scanf("%d", &item);
        flag=item<ivanItem||flag;
        count+=flag?1:0;
    }while (item);


printf("Ivan je na %d. mjestu",count);













}
