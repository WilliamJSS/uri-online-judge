#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,i=1,j;
	
	scanf("%d %d",&x,&y);
	
	while(i<=y)
	{
		for(j=1;j<=x;j++,i++)
		{
			if(i<=y)
			{
				if(j==x||i==y)
					printf("%d\n",i);
				else
					printf("%d ",i);
			}
		}
	}

	system("pause");
	return 0;
}

