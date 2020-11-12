#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,menor,pos;
	
	scanf("%d",&n);
	int x[n];
	scanf("%d",&x[0]);
	for(i=1,menor=x[0],pos=0;i<n;i++){
		scanf("%d",&x[i]);
		if(x[i]<menor){
			menor=x[i]; pos=i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n",menor,pos);

	system("pause");
	return 0;
}

