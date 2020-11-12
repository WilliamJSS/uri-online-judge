#include<stdio.h>
#include<stdlib.h>

int main()
{
	int M,N,t,sum=0;
	scanf("%d %d",&M,&N);
	for(;M>0&&N>0;sum=0)
	{		
		if(M>N){
			t=M; M=N; N=t;
		}
		
		for(;M<=N;sum+=M,M++)
			printf("%d ",M);

		printf("Sum=%d\n",sum);
		scanf("%d %d",&M,&N);
	}	
	system("pause");
	return 0;
}
