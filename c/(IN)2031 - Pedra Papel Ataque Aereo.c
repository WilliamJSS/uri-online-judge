#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char jg1[10],jg2[10];
	int n;
	
	scanf("%d",&n);
	
	setbuf(stdin,NULL);

	for(n;n>0;n--)
	{
		gets(jg1);
		gets(jg2);	
		
		if(strcmp(jg1,jg2)==0)
		{
			if(strcmp(jg1,"pedra")==0)
				printf("Sem ganhador\n");
			else if(strcmp(jg1,"ataque")==0)
				printf("Aniquilacao mutua\n");
			else if(strcmp(jg1,"papel")==0)
				printf("Ambos venceram\n");
		}
		else
		{
			if(strcmp(jg1,"ataque")==0)
				printf("Jogador 1 venceu\n");
			else if(strcmp(jg2,"ataque")==0)
				printf("Jogador 2 venceu\n");
				
			else if(strcmp(jg1,"pedra")==0)
				printf("Jogador 1 venceu\n");
			else if(strcmp(jg1,"papel")==0)
				printf("Jogador 2 venceu\n");
		}
	}
	
	system("pause");
	return 0;
}
