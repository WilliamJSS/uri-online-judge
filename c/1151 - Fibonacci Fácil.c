#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a1=0,a2=1,aux,n,i;
	
	scanf("%d",&n);
	
	if(n>0&&n<46){
		for(i=1;i<=n;i++)
		{
			printf("%d",a1);
			aux=a2; a2=a1+a2; a1=aux;
			if(i<n)
				printf(" ");
			else
				printf("\n");
		}
	}

	system("pause");
	return 0;
}

