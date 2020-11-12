#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int m,n=0,i;
	double fatm=1,fatn=1;
	
	while(scanf("%d %d",&m,&n) != EOF)
	{
		for(i=2,fatm=1;i<=m;i++)
			fatm*=i;
		for(i=2,fatn=1;i<=n;i++)
			fatn*=i;
		printf("%.0f\n",fatm+fatn);	
	}

	system("pause");
	return 0;
}
