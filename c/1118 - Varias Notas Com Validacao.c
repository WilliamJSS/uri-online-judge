#include<stdio.h>
#include<stdlib.h>

int main()
{
	float nota,soma=0;
	int cont,teste;
	
	do{
		cont=0; teste=0; soma=0;
		do{
			scanf("%f",&nota);
			
			if(nota>=0&&nota<=10)
			{
				soma+=nota;
				cont++;
			}
			else
				printf("nota invalida\n");	
			
		}while(cont!=2);
		
		printf("media = %.2f\n",soma/2);
		
		while(teste!=1&&teste!=2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&teste);
		}
		
	}while(teste==1);
	

	system("pause");
	return 0;
}
