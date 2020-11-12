#include<stdio.h>
#include<stdlib.h>

int main()
{
	int soma=0,a,n,i;
	
	scanf("%d",&a);
	
	do{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			soma+=a+i;
	}while(n<=0);
	
	printf("%d\n",soma);

	system("pause");
	return 0;
}

