#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y;
	
	do{
		scanf("%d %d",&x,&y);
		
		if(x>0&&y>0)
			printf("primeiro\n");
		else if(x<0&&y>0)
			printf("segundo\n");
		else if(x<0&&y<0)
			printf("terceiro\n");
		else if(x>0&&y<0)
			printf("quarto\n");
		
	}while(x!=0&&y!=0);

	system("pause");
	return 0;
}
