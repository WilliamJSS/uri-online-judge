#include<stdio.h>
#include<stdlib.h>

int main()
{
	float s,ir;
	
	scanf("%f",&s);
	
	if(s>=0&&s<=2000.00)
		printf("Isento\n");
	else{
		if(s>=2000.01&&s<=3000.00)
			ir=(s-2000)*0.08;
		else if(s>=3000.01&&s<=4500.00)
			ir=80+((s-3000)*0.18);
		else if(s>4500.00)
			ir=350+((s-4500)*0.28);
		
		printf("R$ %.2f\n",ir);
	}

	system("pause");
	return 0;
}

