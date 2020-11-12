#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int x[10],i;
	
	for(i=0;i<10;scanf("%d",&x[i]),i++);
	for(i=0;i<10;printf("X[%d] = %d\n",i,x[i]),i++){
		if(x[i]<=0)
			x[i]=1;
	}

	system("pause");
	return 0;
}

