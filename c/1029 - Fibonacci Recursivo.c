#include<stdio.h>
#include<stdlib.h>

int fib(int n);

int cont=0;

int main()
{
	int n,x;
	
	scanf("%d",&n);
	
	while(n>0){
		scanf("%d",&x);
		printf("fib(%d) = %d calls = %d\n",x,cont-1,fib(x));
		cont=0;
		n--;
	}

	system("pause");
	return 0;
}

int fib(int n){
	if(n>1){
		cont++;
		return fib(n-1) + fib(n-2);
	}
	else if(n==1){
		cont++;
		return 1;
	}
	else{
		cont++;
		return 0;
	}
}
