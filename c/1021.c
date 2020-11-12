#include<stdio.h>
#include<stdlib.h>

int main()
{
	double N,aux;
	int r,Naux;
	
	scanf("%lf",&N);
	Naux=N;
	aux=N-Naux;
		
	printf("NOTAS:\n");
	r=N/100;		
	printf("%d nota(s) de R$ 100.00\n",r);
	Naux=Naux%100; r=Naux/50;
	printf("%d nota(s) de R$ 50.00\n",r);
	Naux=Naux%50; r=Naux/20;
	printf("%d nota(s) de R$ 20.00\n",r);
	Naux=Naux%20; r=Naux/10;
	printf("%d nota(s) de R$ 10.00\n",r);
	Naux=Naux%10; r=Naux/5;
	printf("%d nota(s) de R$ 5.00\n",r);
	Naux=Naux%5; r=Naux/2;
	printf("%d nota(s) de R$ 2.00\n",r);
	
	printf("MOEDAS:\n");
	Naux=Naux%2; r=Naux;
	printf("%d moeda(s) de R$ 1.00\n",r);
	Naux=aux*100; r=Naux/50;
	printf("%d moeda(s) de R$ 0.50\n",r);
	Naux=Naux%50; r=Naux/25;
	printf("%d moeda(s) de R$ 0.25\n",r);
	Naux=Naux%25; r=Naux/10;
	printf("%d moeda(s) de R$ 0.10\n",r);
	Naux=Naux%10; r=Naux/5;
	printf("%d moeda(s) de R$ 0.05\n",r);
	Naux=Naux%5; r=Naux;
	printf("%d moeda(s) de R$ 0.01\n",r);
	
	system("pause");
	return 0;
}

