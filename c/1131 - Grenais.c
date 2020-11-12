#include<stdio.h>
#include<stdlib.h>

int main()
{
	int condicao=1,grenal=0,gol1,gol2,emp=0,vit1=0,vit2=0;
	
	do{
		grenal++;
		
		scanf("%d %d",&gol1,&gol2);
		
		if(gol1>gol2)
			vit1++;
		else if(gol2>gol1)
			vit2++;
		else
			emp++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&condicao);
		
	}while(condicao==1);
	
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",grenal,vit1,vit2,emp);
	if(vit1>vit2)
		printf("Inter venceu mais\n");
	else if(vit1<vit2)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");

	system("pause");
	return 0;
}

