#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,z,soma=0,i=0;
	
	scanf("%d",&x);
	do{
		scanf("%d",&z);
	}while(x>=z);
	
	while(soma<=z){
		soma+=x;
		i++; x++;
	}
	
	printf("%d\n",i);

	system("pause");
	return 0;
}
