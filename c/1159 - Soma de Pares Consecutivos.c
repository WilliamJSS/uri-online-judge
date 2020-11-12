#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,i,soma=0;
	
	do{
		scanf("%d",&x);
		
		if(x!=0){
			if(x%2!=0)
				x++;
			for(soma=0,i=0;i<5;i++,x+=2)
				soma+=x;
				
			printf("%d\n",soma);
		}
		
	}while(x!=0);

	system("pause");
	return 0;
}

