#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,r;
	
	scanf("%d",&N);
	
	if(N>0&&N<1000000){
			
		printf("%d\n",N);
		r=N/100;		
		printf("%d nota(s) de R$ 100,00\n",r);
		N=N%100; r=N/50;
		printf("%d nota(s) de R$ 50,00\n",r);
		N=N%50; r=N/20;
		printf("%d nota(s) de R$ 20,00\n",r);
		N=N%20; r=N/10;
		printf("%d nota(s) de R$ 10,00\n",r);
		N=N%10; r=N/5;
		printf("%d nota(s) de R$ 5,00\n",r);
		N=N%5; r=N/2;
		printf("%d nota(s) de R$ 2,00\n",r);
		N=N%2; r=N;
		printf("%d nota(s) de R$ 1,00\n",r);				
	}

	system("pause");
	return 0;
}

