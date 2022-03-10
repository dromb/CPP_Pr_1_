#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	int b;
	
	printf("Unesite prvi broj\n");
	scanf("%d", &a);
	printf("Unesite drugi broj\n");
	scanf("%d", &b);
	
	if(a>b)
		printf("%d je veci od %d!", a, b);
		
	else	
		printf("%d je veci od %d!", b, a );	
}
