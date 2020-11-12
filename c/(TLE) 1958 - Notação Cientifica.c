/*Voc� deve escrever um programa que, dado um n�mero em ponto flutuante, 
mostre este n�mero na nota��o cient�fica: sempre mostre o sinal da mantissa;
sempre mostre 4 casas decimais na mantissa; use o caractere 'E' para separar
a mantissa do expoente; sempre mostre o sinal do expoente; e mostre o expoente
com pelo menos 2 d�gitos. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cont=0;
	double x;
	
	scanf("%lf",&x);
	
	if(x>0){
		if(x>=10){
			while(x>=10){
				x/=10;
				cont++;
			}
			printf("+%.4fE+%02d\n",x,cont);
		}else if(x<1){
			while(x<1){
				x*=10;
				cont++;
			}
			printf("+%.4fE-%02d\n",x,cont);
		}else
			printf("+%.4fE+%02d\n",x,cont);
	}
	else{
		if(x<=-10){
			while(x<=-10){
				x/=10;
				cont++;
			}
			printf("%.4fE+%02d\n",x,cont);
		}
		else if(x>-1){
			while(x>-1){
				x*=10;
				cont++;
			}
			printf("%.4fE-%02d\n",x,cont);
		}
		else
			printf("%.4fE+%02d\n",x,cont);
	}

	system("pause");
	return 0;
}

