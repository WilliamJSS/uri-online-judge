#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,aux,i,soma=0;
	
	scanf("%d %d",&x,&y);
	if(x>y){
		aux=x; x=y; y=aux;
	}
	for(i=x;i<=y;i++)
	{
		if(i%13!=0)
			soma+=i;
	}
	printf("%d\n",soma);
	system("pause");
	return 0;
}

