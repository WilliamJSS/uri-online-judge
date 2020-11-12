#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,j=7;
	
	while(i<10){
		printf("I=%d J=%d\n",i,j);
		j--;
		if(j==4){
			j=7; i+=2;
		}
	}

	system("pause");
	return 0;
}

