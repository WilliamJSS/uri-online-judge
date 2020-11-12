#include<stdio.h>
#include<stdlib.h>

int main()
{
	float nota,soma=0;
	int cont=0,teste=0,pedido;
	
	while(cont<2)
	{
		scanf("%f",&nota);
		if(nota>=0&&nota<=10){
			soma+=nota;
			cont++;
		}
		else
			printf("nota invalida\n");
		if(cont==2)
		{
			printf("media = %.2f\n",soma/2);
			
			while(teste==0)
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d",&pedido);
				if(pedido==1){
					teste=1;
					cont=0;
				}else if(pedido==2)
					return 0;
		}
	}
	system("pause");
	return 0;
}

