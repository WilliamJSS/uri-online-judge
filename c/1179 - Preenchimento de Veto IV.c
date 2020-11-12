#include<stdio.h>
#include<stdlib.h>

int main()
{
	int par[5],impar[5],np,ni,i,j,x;
	
	for(i=0,np=0,ni=0;i<15;i++){
		scanf("%d",&x);
		if(x%2==0&&np<5){
			par[np]=x; np++;
		}else if(x%2==0&&np==5){
			for(j=0;j<np;printf("par[%d] = %d\n",j,par[j]),j++);
			np=1; par[0]=x;
		}
		if(x%2!=0&&ni<5){
			impar[ni]=x; ni++;
		}else if(x%2!=0&&ni==5){
			for(j=0;j<ni;printf("impar[%d] = %d\n",j,impar[j]),j++);
			ni=1; impar[0]=x;
		}
	}
	for(j=0;j<ni;printf("impar[%d] = %d\n",j,impar[j]),j++);
	for(j=0;j<np;printf("par[%d] = %d\n",j,par[j]),j++);
	
	system("pause");
	return 0;
}

