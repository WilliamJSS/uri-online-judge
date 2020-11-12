#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,cont=1;
	
	scanf("%d",&n);

	for(i=1;i<=n;i++,cont+=4)
	{
		printf("%d %d %d PUM\n",cont,cont+1,cont+2);
	}

	system("pause");
	return 0;
}

