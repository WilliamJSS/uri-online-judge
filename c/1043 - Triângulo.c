#include<stdio.h>
#include<stdlib.h>

int main()
{
	float A,B,C,x;
	
	scanf("%f %f %f",&A,&B,&C);
	
	if(A<B){
		x=A; A=B; B=x;
	}if(A<C){
		x=A; A=C; C=x;
	}
	
	if(A>=B+C){
		printf("Area = %.1f\n",(A+B)*C/2);
	}else{
		printf("Perimetro = %.1f\n",A+B+C);
	}

	system("pause");
	return 0;
}

