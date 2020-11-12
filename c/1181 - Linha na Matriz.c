#include<stdio.h>
#include<stdlib.h>
#define tam 12

int main()
{
	double m[tam][tam],soma=0;
	int i,j,l;
	char op;
	
	scanf("%d",&l);
	scanf(" %c",&op);
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++)
			scanf("%lf",&m[i][j]);
	}
	
	for(j=0;j<tam;j++)
		soma=soma+m[l][j];
		
	if(op=='S')
		printf("%.1f\n",soma);
	else if(op=='M')
		printf("%.1f\n",soma/tam);

	system("pause");
	return 0;
}

