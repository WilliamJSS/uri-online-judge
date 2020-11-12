#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cod1,cod2,n1,n2;
	float valor1,valor2;
	
	scanf("%d %d %f",&cod1,&n1,&valor1);
	scanf("%d %d %f",&cod2,&n2,&valor2);

	printf("VALOR A PAGAR: R$ %.2f\n",n1*valor1+n2*valor2);

	system("pause");
	return 0;
}
