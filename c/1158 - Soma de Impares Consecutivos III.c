#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,y,soma=0;
	
	scanf("%d",&n);
	
	for(;n>0;n--,soma=0){
		scanf("%d %d",&x,&y);
		for(;y>0;y--,x+=2){
			if(x%2==0)
				x++;
			
			soma+=x;
		}
		printf("%d\n",soma);
	}

	system("pause");
	return 0;
}

