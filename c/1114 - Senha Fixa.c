#include<stdio.h>
#include<stdlib.h>

int main()
{
	int senha;
	
	do{
		scanf("%d",&senha);
		if(senha!=2002)
			printf("Senha Invalida\n");
		else
			printf("Acesso Permitido\n");
	}while(senha!=2002);

	system("pause");
	return 0;
}

