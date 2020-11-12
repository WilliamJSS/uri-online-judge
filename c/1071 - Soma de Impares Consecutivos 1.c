#include<stdio.h>
#include<stdlib.h>

int main()
{
	int soma=0,X,Y,aux;
	
	scanf("%d %d",&X,&Y);
	
	if(X>Y){
		aux=X; X=Y; Y=aux;
	}
	
	for(X+=1;X<Y;X++){
		if(X%2!=0)
			soma+=X;
	}
	printf("%d\n",soma);

	system("pause");
	return 0;
}

