#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double A,B,C;
	double R1,R2,delta;
	
	scanf("%lf %lf %lf",&A,&B,&C);
	
	delta = (B*B)-(4*A*C);
	
	if(A==0||delta<0)
		printf("Impossivel calcular\n");
	else{
		R1=(-B+sqrt(delta))/(2*A);
		R2=(-B-sqrt(delta))/(2*A);
		
		printf("R1 = %.5f\n",R1);
		printf("R2 = %.5f\n",R2);
	}

	system("pause");
	return 0;
}
