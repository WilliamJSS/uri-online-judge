#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	
	scanf("%d",&n);
	
	if(n>2)
	{
		for(i=1;i<=10;i++)
		{
			printf("%d x %d = %d\n",i,n,i*n);
		}
	}

	system("pause");
	return 0;
}

