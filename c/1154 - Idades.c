#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cont=0,idade,soma=0;
	
	do{
		scanf("%d",&idade);
		if(idade>=0){
			cont++;
			soma+=idade;
		}
		
	}while(idade>=0);
	
	printf("%.2f\n",soma*1.00/cont);

	system("pause");
	return 0;
}

