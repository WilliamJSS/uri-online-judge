#include<stdio.h>

int main(){

    int n,num,i,j,teste=0;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++,teste=0)
    {
    	scanf("%d",&num);
    	for(j=1;j<=num;j++)
    	{
    		if(num%j==0)
            	teste++;
    	}
    	if(teste==2)
        	printf("%d eh primo\n",num);
    	else
        	printf("%d nao eh primo\n",num);
    }
    return 0;   
}
