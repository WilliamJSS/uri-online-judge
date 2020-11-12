#include<stdio.h>
#include<stdlib.h>

int main()
{
	long int n;
	int v[12],i=0,j,aux;
	
	scanf("%llu",&n);
	
	do
	{
		aux=n%10;
		n=n/10;
		
		v[i]=aux;
		i++;
				
	}while(n!=0);
	
	for(j=0;j<=i;j++)
		printf("%d",v[j]);
		
	printf("\n");
		
	system("pause");
	return 0;
}
