#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,r1,r2;
	
	scanf("%d",&n);
	
	for(;n>0;n--){
		scanf("%d %d",&r1,&r2);
		printf("%d\n",r1+r2);
	}

	system("pause");
	return 0;
}

