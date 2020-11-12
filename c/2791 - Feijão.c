#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c,i,x;
	
	for(i=1;i<=4;i++){
		scanf("%d",&x);
		if(x==1)
			c=i;
	}
	printf("%d\n",c);

	system("pause");
	return 0;
}

