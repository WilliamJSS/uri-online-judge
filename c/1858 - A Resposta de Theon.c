#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,t=0;
	
	scanf("%d",&n);
	
	int v[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);

	for(i=1;i<n;i++){
		if(v[i]<v[t])
			t=i;
	}
	
	printf("%d\n",t+1);

	system("pause");
	return 0;
}

