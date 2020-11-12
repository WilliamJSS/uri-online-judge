#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[15];
	double salario, venda;

	scanf("%s",&nome);
	scanf("%lf %lf",&salario,&venda);
	
	printf("TOTAL = R$ %.2f\n",venda*0.15+salario);

	system("pause");
	return 0;
}
