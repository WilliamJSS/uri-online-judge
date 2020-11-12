#include<stdio.h>
#include<stdlib.h>
#define tam 100

int main()
{
	float a[tam];
	int i;
	
	for(i=0;i<tam;i++)
		scanf("%f",&a[i]);
		
	for(i=0;i<tam;i++)
	{
		if(a[i]<=10)
			printf("A[%d] = %.1f\n",i,a[i]);
	}

	system("pause");
	return 0;
}

