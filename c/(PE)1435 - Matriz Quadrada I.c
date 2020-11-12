#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tam, i, j;

	scanf("%d",&tam);

	while(tam!=0)
	{
		int m[tam][tam];

		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++)
			{
				if(i+1<j+1)
					m[i][j]=i+1;
				else
					m[i][j]=j+1;
			}
		}

		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++)
			{
				printf("%d",m[i][j]);
				if(j<tam-1)
					printf("   ");
			}
			printf("\n");
		}

		scanf("%d",&tam);
	}

	system("pause");
	return 0;
}

