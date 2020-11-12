#include<stdio.h>
#include<stdlib.h>

int main()
{
	int fat=1,i,n;
	
	scanf("%d",&n);
	
	if(n>0&&n<13)
	{
		for(i=1;i<=n;i++){
			fat*=i;
		}
		printf("%d\n",fat);
	}

	system("pause");
	return 0;
}

