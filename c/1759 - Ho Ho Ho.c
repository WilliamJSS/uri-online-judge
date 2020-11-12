#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		printf("Ho ");
		if(i==n-1)
			printf("Ho!\n");
	}

	system("pause");
	return 0;
}

