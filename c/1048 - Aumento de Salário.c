#include<stdio.h>
#include<stdlib.h>

int main()
{
	float s,r;
	int rp;
	
	scanf("%f",&s);
	
	if(s>0&&s<=400.00){
		r=s*0.15;
		s+=r; rp=15;
	}
	else if(s>=400.00&&s<=800.00){
		r=s*0.12;
		s+=r;
	}
	else if(s>=800.01&&s<=1200.00){
		r=s*0.10;
		s+=r; rp=10;
	}
	else if(s>=1200.01&&s<=2000.00){
		r=s*0.07;
		s+=r; rp=7;
	}
	else if(s>2000.00){
		r=s*0.04;
		s+=r; rp=4;
	}
	
	printf("Novo salario: %.2f\n",s);
	printf("Reajuste ganho: %.2f\n",r);
	printf("Em percentual: %d %%\n",rp);

	system("pause");
	return 0;
}

