#include<stdio.h>
#include<stdlib.h>

int main()
{
	double A,B,C,x;
	
	scanf("%lf %lf %lf",&A,&B,&C);
	
	if(B>A){
		x=B; B=A; A=x;
	}
	if(C>A){
		x=C; C=A; A=x;
	}
			
	if(A>=B+C)
		printf("NAO FORMA TRIANGULO\n");
	else if(A*A==B*B+C*C)
		printf("TRIANGULO RETANGULO\n");
	else if(A*A>B*B+C*C)
		printf("TRIANGULO OBTUSANGULO\n");
	else if(A*A<B*B+C*C)
		printf("TRIANGULO ACUTANGULO\n");
	if(A==B&&B==C)
		printf("TRIANGULO EQUILATERO\n");
	else if((A==B&&A!=C)||(A==C&&A!=B)||(B==C&&B!=A))
		printf("TRIANGULO ISOSCELES\n");
	
	system("pause");
	return 0;
}
