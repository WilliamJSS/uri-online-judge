#include<stdio.h>
#include<stdlib.h>

int main()
{
	float nota,soma=0,cont=0;
	
	do{
		scanf("%f",&nota);
		if(nota>=0&&nota<=10){
			soma+=nota;
			cont++;
		}
		else
			printf("nota invalida\n");
		}while(cont<2);
	
	printf("media = %.2f\n",soma/2);

	system("pause");
	return 0;
}

