#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,a=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d %d %d\n",a,a*a,a*a*a);
		printf("%d %d %d\n",a,(a*a)+1,(a*a*a)+1);
		a++;
	}

	system("pause");
	return 0;
}

