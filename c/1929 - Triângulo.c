#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v[4],i,teste=0,aux;
	
	for(i=0;i<4;scanf("%d",&v[i]),i++);
	
	for(i=0;i<4;i++){
		aux=v[0]; v[0]=v[i]; v[i]=aux;		
		if(v[0]<v[1]+v[2]&&v[0]>abs(v[1]-v[2])||v[0]<v[1]+v[3]&&v[0]>abs(v[1]-v[3])||v[0]<v[2]+v[3]&&v[0]>abs(v[3]-v[2]))
			teste++;
	}

	(teste>0) ? printf("S\n") : printf("N\n");

	system("pause");
	return 0;
}

