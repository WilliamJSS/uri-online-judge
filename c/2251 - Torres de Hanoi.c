#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,cont=0,passo;
	
	scanf("%d",&n);
	
	while(n!=0){
		cont++; passo=1;
		for(i=1;i<n;i++)
			passo=(passo*2)+1;
			
		printf("Teste %d\n%d\n\n",cont,passo);
		
		scanf("%d",&n);
	}

	system("pause");
	return 0;
}

