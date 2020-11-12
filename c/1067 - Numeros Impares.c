#include<stdio.h>
#include<stdlib.h>

int main()
{
	int X,i=1;
	
	scanf("%d",&X);
	
	if(X>=1&&X<=1000){
		
		for(i;i<=X;i+=2){
			
			printf("%d\n",i);
		}
	}

	system("pause");
	return 0;
}

