#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,j=60;
	
	for(j;j>=0;j-=5){
		printf("I=%d J=%d\n",i,j);
		i+=3;
	}

	system("pause");
	return 0;
}

