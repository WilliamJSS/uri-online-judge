#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m=1,i,j,x,teste=0,tam=1;
	
	scanf("%d",&n);
	int nr[n], aux[n];
	nr[0]=1;
	
	for(i=0;i<n;i++)
		aux[i]=i+1;
	
	//inicio...
	for(i=1;i<n;i++,x+=m,teste=0,j=0){
		while(teste!=0){
			for(j=0,teste=0;j<tam;j++){
				if(aux[x]==nr[j]){
					teste++; j=tam; x++;
					if(x>n-1)
						x=x-n-1;
				}
			}
		}
		nr[tam]=aux[x];
	}
	
	for(i=0;i<n;i++)
		printf(" %d",nr[i]);
		
	printf("\n\n");
	

	system("pause");
	return 0;
}

