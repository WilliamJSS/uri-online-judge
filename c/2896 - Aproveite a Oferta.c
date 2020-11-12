#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,n,k;
	
	scanf("%d",&t);
	
	for(;t>0;t--){
		scanf("%d %d",&n,&k);
		printf("%d\n",(n/k)+(n%k));
	}

	system("pause");
	return 0;
}

