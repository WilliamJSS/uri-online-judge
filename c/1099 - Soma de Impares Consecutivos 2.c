#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,x,y,n,aux,soma;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		soma=0;
		scanf("%d",&x);
		scanf("%d",&y);
		
		if(x>y){
			aux=x; x=y; y=aux;
		}
		if(x%2!=0)
			x++;
		for(x+=1;x<y;x+=2)
		{
			soma+=x;
		}
		printf("%d\n",soma);
	}

	system("pause");
	return 0;
}

