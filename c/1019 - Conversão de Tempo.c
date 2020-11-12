#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;
	
	scanf("%d",&N);
	
	if(N>=0)
	printf("%d:%d:%d\n",(N/60)/60,(N/60)%60,N%60);

	system("pause");
	return 0;
}

