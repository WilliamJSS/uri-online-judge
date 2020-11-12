#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n[20],i,aux;
	
	for(i=0;i<20;scanf("%d",&n[i]),i++);
	
	for(i=0;i<10;i++){
		aux=n[19-i]; n[19-i]=n[i]; n[i]=aux;
	}
	for(i=0;i<20;printf("N[%d] = %d\n",i,n[i]),i++);

	system("pause");
	return 0;
}

