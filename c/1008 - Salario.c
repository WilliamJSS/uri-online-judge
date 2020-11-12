#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, horas;
	float valor;
	
	scanf("%d",&num);
	scanf("%d",&horas);
	scanf("%f",&valor);
	
	printf("NUMBER = %d\n",num);
	printf("SALARY = U$ %.2f\n",valor*horas);

	system("pause");
	return 0;
}

