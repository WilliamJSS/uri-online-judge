#include<stdio.h>
#include<stdlib.h>
#define ORDEM 12

int main()
{
	int i,j,cont=0;
	char operacao;
	double mat[ORDEM][ORDEM],soma=0;
	
	scanf("%c",&operacao);
	
	if(operacao=='S'){
		for(i=0;i<ORDEM;i++){
			for(j=0;j<ORDEM;j++){
				scanf("%lf",&mat[i][j]);
				if(i>j&&i<ORDEM-1-j){
					soma+=mat[i][j];
					cont++;
				}
			}
		}
		printf("%.1f\n",soma);
	}else if(operacao=='M'){
		for(i=0;i<ORDEM;i++){
			for(j=0;j<ORDEM;j++){
				scanf("%lf",&mat[i][j]);
				if(i>j&&i<ORDEM-1-j){
					soma+=mat[i][j];
					cont++;
				}
			}
		}
		printf("%.1f\n",soma/cont);
	}
	
	system("pause");
	return 0;
}
