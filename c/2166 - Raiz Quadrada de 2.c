#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	double x=0,aux=2;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		x=1/aux;
		aux=2+x;
	}
	
	printf("%.10f\n",x+1);

	system("pause");
	return 0;
}

