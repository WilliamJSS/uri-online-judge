#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,y,i;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&x,&y);
		if(y==0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n",x*1.0/y);
	}

	system("pause");
	return 0;
}

