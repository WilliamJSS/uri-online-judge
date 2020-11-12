#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,d,e,f;
	int p=0;
	
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	if(a>0)
		p++;
	if(b>0)
		p++;
	if(c>0)
		p++;
	if(d>0)
		p++;
	if(e>0)
		p++;
	if(f>0)
		p++;
		
	printf("%d valores positivos\n",p);

	system("pause");
	return 0;
}

