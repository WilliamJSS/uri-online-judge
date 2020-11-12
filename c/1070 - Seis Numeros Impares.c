#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int X,i;
	
	scanf("%d",&X);
	
	if(X%2==0)
		X+=1;
		
	for(i=1;i<=6;i++){
		
		printf("%d\n",X);
		X+=2;
	}
	system("pause");
	return 0;
}

