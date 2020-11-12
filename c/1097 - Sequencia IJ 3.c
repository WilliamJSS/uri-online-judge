#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,j=7,x=0;
	
	while(x<5){
		printf("I=%d J=%d\n",i,j--);
		printf("I=%d J=%d\n",i,j--);
		printf("I=%d J=%d\n",i,j--);
		if(j==4){
			j=9; i+=2;
		}else if(j==6){
			j=11; i+=2;
		}else if(j==8){
			j=13; i+=2;
		}else if(j==10){
			j=15; i+=2;
		}
		x++;
	}

	system("pause");
	return 0;
}
