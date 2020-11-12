#include<stdio.h>
#include<stdlib.h>

int main()
{
	float i=0,j=1;
	
	while(i<=2.0){
		if(i==0||i==1){
			printf("I=%.0f J=%.0f\n",i,j+i);
			printf("I=%.0f J=%.0f\n",i,j+1+i);
			printf("I=%.0f J=%.0f\n",i,j+2+i);
		}
		else{
			printf("I=%.1f J=%.1f\n",i,j+i);
			printf("I=%.1f J=%.1f\n",i,j+1+i);
			printf("I=%.1f J=%.1f\n",i,j+2+i);
		}
		i+=0.2;
	}
	printf("I=%.0f J=%.0f\n",i,j+i);
	printf("I=%.0f J=%.0f\n",i,j+1+i);
	printf("I=%.0f J=%.0f\n",i,j+2+i);

	system("pause");
	return 0;
}

