#include <stdio.h>

main()
{
    float F;
    float C;
    float K;

    printf("Unestite koliko ima Fahrenheite\n");
    scanf("%f",&F);

    C=(F-32)*9/5;
    printf("%.2f\n",C);
    K=C+273.15;
    printf("%.2f\n",K);

}
