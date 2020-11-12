#include<stdio.h>
#include<stdlib.h>
#define tam 1000

int main()
{
	int t,n[tam],i,j=0;
	
	scanf("%d",&t);
	
	for(i=0;i<tam;i++,j++){
		if(j==t)
			j=0;		
		printf("N[%d] = %d\n",i,j);
	}

	system("pause");
	return 0;
}

