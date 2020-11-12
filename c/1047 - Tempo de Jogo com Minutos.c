#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hi,mi,hf,mf,i=0;
	
	scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
	
	if(hi==mi&&mi==hf&&hf==mf)
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else{
		
	while(i<2){
		
		if(hi>hf)
			hf+=24;
		if(mi>mf){
			hf--; mf+=60;
		}
		i++;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf-hi,mf-mi);
		
	}
	
	system("pause");
	return 0;
}

