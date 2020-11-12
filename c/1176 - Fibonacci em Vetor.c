#include<stdio.h>

int main(){

	int n,x,i;
	double fib[61]={0,1};
	
	scanf("%d",&n);
	
	for(i=2;i<61;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&x);
		printf("Fib(%d) = %.0f\n",x,fib[x]);
	}
	
	return 0;
}
