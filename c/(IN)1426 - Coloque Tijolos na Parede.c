#include<stdio.h>
#include<stdlib.h>
#define ord 9

int main()
{
	int m[ord][ord],lin,col,x;
	
	for(lin=0;lin<ord;lin+=2)
		for(col=0;col<=lin;scanf("%d",&m[lin][col]),col+=2);
	
	//....até aqui tudo ok
	for(lin=0;lin<ord;lin++){
		for(col=0;col<=lin;col++){
			
		}
	}

	system("pause");
	return 0;
}

