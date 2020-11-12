#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,aux,cont;
	
	scanf("%d",&n); aux=n;
	
	if(n/100>0){
		aux=n/100; n=n%100;
		if(aux==9) printf("CM");
		else if(aux>=5)
			for(cont=aux-5,printf("D");cont>0;printf("C"),cont--);
		else if(aux==4) printf("CD");
		else if(aux<4)
			for(cont=aux;cont>0;printf("C"),cont--);
	}
	if(n/10>0){
		aux=n/10; n=n%10;
		if(aux==9) printf("XC");
		else if(aux>=5)
			for(cont=aux-5,printf("L");cont>0;printf("X"),cont--);
		else if(aux==4) printf("XL");
		else if(aux<4)
			for(cont=aux;cont>0;printf("X"),cont--);
	}
	if(n>0){
		aux=n;
		if(aux==9) printf("IX");
		else if(aux>=5)
			for(cont=aux-5,printf("V");cont>0;printf("I"),cont--);
		else if(aux==4) printf("IV");
		else if(aux<4)
			for(cont=aux;cont>0;printf("I"),cont--);
	}
	printf("\n");
	system("pause");
	return 0;
}

