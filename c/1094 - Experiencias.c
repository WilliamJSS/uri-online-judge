#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,q,i,t,c=0,r=0,s=0;
	char cobaia;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d %c",&q,&cobaia);
		
		if(q>=1 && q<=15)
		{
			if(cobaia=='C')
				c+=q;
			else if(cobaia=='R')
				r+=q;
			else if(cobaia=='S')
				s+=q;
		}
	}t=c+r+s;
	
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",t,c,r,s);
	printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",c*100.00/t,r*100.00/t,s*100.00/t);

	system("pause");
	return 0;
}
