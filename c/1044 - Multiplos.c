#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A,B;
	
	scanf("%d %d",&A,&B);
	
	if(A==B)
		printf("Sao Multiplos\n");
	else if(A>B){
		if(B==0)
			printf("Sao Multiplos\n");
		else if(A%B==0)
			printf("Sao Multiplos\n");
		else
			printf("Nao sao Multiplos\n");
	}else if(B>A){
		if(A==0)
			printf("Sao Multiplos\n");
		else if(B%A==0)
			printf("Sao Multiplos\n");
		else
			printf("Nao sao Multiplos\n");
	}

	system("pause");
	return 0;
}

