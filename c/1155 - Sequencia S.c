#include<stdio.h>
#include<stdlib.h>

int main()
{
	float s=1,i;
	
	for(i=2;i<=100;i++)
		s=s+(1/i);
	
	printf("%.2f\n",s);

	system("pause");
	return 0;
}

