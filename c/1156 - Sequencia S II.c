#include<stdio.h>
#include<stdlib.h>

int main()
{
	float s=1,i,j=2;
	
	for(i=3;i<=39;i+=2,j*=2)
		s=s+(i/j);
	
	printf("%.2f\n",s);

	system("pause");
	return 0;
}

