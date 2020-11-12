#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,i;
	int X,in=0,out=0;
	
	scanf("%d",&N);
	
	if(N<10000){
		
		for(i=1;i<=N;i++)
		{
			scanf("%d",&X);
			if(X>=10&&X<=20)
				in++;
			else
				out++;
		}
		printf("%d in\n",in);
		printf("%d out\n",out);
	}
	system("pause");
	return 0;
}

