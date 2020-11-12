#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,i,r,s,teste=0;
	
	scanf("%d %d",&n,&r);
	s=r;
	for(i=1;i<n;i++)
	{
		scanf("%d",&x);
		s+=x;
		if(s<100000)
			if(x>r)
				teste=1;
	}
	if(teste==0)
		printf("S\n");
	else
		printf("N\n");
	system("pause");
	return 0;
}

