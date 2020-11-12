#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,ord,lin,col,cont=1,x=1,aux;
	
	scanf("%d %d %d",&ord,&a,&b);
	
	int m[ord][ord];
	
	for(lin=0;lin<ord;lin++)
		for(col=0;col<ord;m[lin][col]=cont,cont++,col++);
	
	cont=0;	
	if((a>=0&&a<ord)&&(b>=0&&b<ord)){
		printf("%d ",m[a][b]);
		cont=1;
	}
	
	while(cont<ord*ord){
		for(aux=1;aux<=x;aux++){
			b++;
			if((a>=0&&a<ord)&&(b>=0&&b<ord)){
				printf("%d ",m[a][b]);
				cont++;
			}
		}
		for(aux=1;aux<=x;aux++){
			a++;
			if((a>=0&&a<ord)&&(b>=0&&b<ord)){
				printf("%d ",m[a][b]);
				cont++;
			}
		}
		x++;
		for(aux=1;aux<=x;aux++){
			b--;
			if((a>=0&&a<ord)&&(b>=0&&b<ord)){
				printf("%d ",m[a][b]);
				cont++;
			}
		}
		for(aux=1;aux<=x;aux++){
			a--;
			if((a>=0&&a<ord)&&(b>=0&&b<ord)){
				printf("%d ",m[a][b]);
				cont++;
			}
		}
	}
	
	printf("\b\n");

	system("pause");
	return 0;
}

