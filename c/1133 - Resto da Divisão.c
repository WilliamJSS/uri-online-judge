#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,aux,i,soma=0;
	
	scanf("%d %d",&x,&y);
	if(x>y){
		aux=x; x=y; y=aux;
	}
	for(i=x+1;i<y;i++)
	{
		if(i%5==2||i%5==3)
			printf("%d\n",i);
	}

	system("pause");
	return 0;
}
