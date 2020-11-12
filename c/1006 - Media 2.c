#include<stdio.h>
#include<stdlib.h>

int main()
{
	double A,B,C,MEDIA;
	
	scanf("%4lf",&A);
	scanf("%4lf",&B);
	scanf("%4lf",&C);
	
	MEDIA = (A*2+B*3+C*5)/10;

	printf("MEDIA = %.1f\n",MEDIA);

	system("pause");
	return 0;
}
