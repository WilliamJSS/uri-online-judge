#include<stdio.h>
#include<stdlib.h>

int main()
{
	int op,alcool=0,gasolina=0,diesel=0;

	do{
		scanf("%d",&op);
		if(op==1)
			alcool++;
		else if(op==2)
			gasolina++;
		else if(op==3)
			diesel++;
	}while(op!=4);

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);

	system("pause");
	return 0;
}

