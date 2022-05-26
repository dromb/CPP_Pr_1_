#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char odabir[8];
	int nestjeodabrano=1;
	float sum=0;
	int i;
	
	while(nestjeodabrano){
		system("cls");
		printf("\t\t Meni:\n");
		printf("\t\t 1 kava\n");
		printf("\t\t 2 sladoled\n");
		printf("\t\t 3 govno\n");
		printf("\t\t 4 krofna\n");
		printf("Za prestanak unosa unesite bilo sto drugo\n");
		
		scanf("%s", odabir);
		
		for(i=0; odabir[i]!='0';i++)
		odabir[i]=tolower(odabir[i]);
		
		if(!strcmp(odabir, "kava")|!strcmp(odabir, "1")) sum+=120;
		else if(!strcmp(odabir, "sladoled")|!strcmp(odabir, "2")) sum+=1.5;
		else if(!strcmp(odabir, "govno")|!strcmp(odabir, "3")) sum+=25;
		else if(!strcmp(odabir, "krafna")|!strcmp(odabir, "4")) sum+=1500;
		else nestjeodabrano=0;
		
	}
	
	printf("Ukupan promet dns iznosi %.2f", sum);
}
