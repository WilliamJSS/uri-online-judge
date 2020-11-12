#include<stdio.h>
#include<stdlib.h>

int main()
{
	double A,B,MEDIA;
	
	scanf("%4lf",&A);
	scanf("%4lf",&B);
	
	MEDIA = (A*3.5+B*7.5)/11;

	printf("MEDIA = %.5f\n",MEDIA);

	system("pause");
	return 0;
}

