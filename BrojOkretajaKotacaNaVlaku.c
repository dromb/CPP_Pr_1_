#include<stdio.h>

main()
{
    int d;
    printf("Unesi promjer kota�a\n");
    scanf("%d", &d);

    float opseg=d*3.1356;

    printf("Napravi %.0f okretaja", 400000/opseg);
}
