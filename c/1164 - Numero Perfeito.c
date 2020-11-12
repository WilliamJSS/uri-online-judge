#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,i,j,soma;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x);
		for(j=1,soma=0;j<x;j++){
			if(x%j==0)
				soma+=j;
		}
		if(soma==x)
			printf("%d eh perfeito\n",x);
		else
			printf("%d nao eh perfeito\n",x);
	}

	system("pause");
	return 0;
}

