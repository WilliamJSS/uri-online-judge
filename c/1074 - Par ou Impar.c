#include<stdio.h>
#include<stdlib.h>

int main()
{
	int X,N,i;
	
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		
		scanf("%d",&X);
		
		if(X==0)
			printf("NULL\n");
		else if(X%2==0)
			printf("EVEN");
		else if(X%2!=0)
			printf("ODD");
			
		if(X<0)
			printf(" NEGATIVE\n");
		else if(X>0)
			printf(" POSITIVE\n");
	}
	system("pause");
	return 0;
}

