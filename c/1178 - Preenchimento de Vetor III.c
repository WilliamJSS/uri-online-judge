#include<stdio.h>
#include<stdlib.h>
#define tam 100

int main()
{
	int i;
	double x,n[tam];

	scanf("%lf",&x);
	
	for(i=1,printf("N[0] = %.4f\n",x);i<tam;x/=2,printf("N[%d] = %.4f\n",i,x),i++);

	system("pause");
	return 0;
}
