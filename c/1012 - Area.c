#include<stdio.h>
#include<stdlib.h>

int main()
{
	double A,B,C;
	const double pi=3.14159;
	
	scanf("%lf %lf %lf",&A,&B,&C);
	
	printf("TRIANGULO: %.3f\n",(A*C)/2);
	printf("CIRCULO: %.3f\n",pi*C*C);
	printf("TRAPEZIO: %.3f\n",((A+B)*C)/2);
	printf("QUADRADO: %.3f\n",B*B);
	printf("RETANGULO: %.3f\n",A*B);
	
	system("pause");
	return 0;
}

