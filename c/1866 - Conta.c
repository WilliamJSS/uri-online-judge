#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x;
	
	scanf("%d",&n);
	
	for(;n>0;n--){
		scanf("%d",&x);
		(x%2==0) ? printf("0\n") : printf("1\n");
	}

	system("pause");
	return 0;
}

