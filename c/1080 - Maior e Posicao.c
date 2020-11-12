#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,maior,i,cont=1,posicao;
	
	scanf("%d",&maior);
	posicao=1;
	
	for(i=1;i<100;i++){
		cont++;
		scanf("%d",&x);
		if(x>maior){
			maior=x;
			posicao=cont;
		}	
	}
	printf("%d\n%d\n",maior,posicao);
	system("pause");
	return 0;
}

