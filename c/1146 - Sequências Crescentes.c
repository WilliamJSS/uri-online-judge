#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,i;
	
	do{
		scanf("%d",&x);
		for(i=1;i<=x;i++)
		{
			printf("%d",i);
			if(i<x)
				printf(" ");
			else
				printf("\n");
		}
	}while(x!=0);
	
	system("pause");
	return 0;
}

