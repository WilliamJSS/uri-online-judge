#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int N;
	int i=1;
	float a,b,c;
	
	scanf("%d",&N);
	
	for(i;i<=N;i++)
	{
		scanf("%f %f %f",&a,&b,&c);
		printf("%.1f\n",(a*2+b*3+c*5)/10);
	}

	system("pause");
	return 0;
}

