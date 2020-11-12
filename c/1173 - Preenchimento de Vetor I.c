#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n[10],x;
	
	scanf("%d",&x);
	
	n[0]=x;
	for(i=1;i<10;i++,x*=2){
		n[i]=2*x;
	}

	for(i=0;i<10;i++)
		printf("N[%d] = %d\n",i,n[i]);

	system("pause");
	return 0;
}

