#include<stdio.h>

main()
{
    float NC;
    float SC;
    printf("Unesite staru i novu cijenu\n");
    scanf("%f %f", &SC, &NC);
    int Posto=((float)(SC-NC)/SC)*100;
    printf("%d %%\n",Posto);
    return 0;
}
