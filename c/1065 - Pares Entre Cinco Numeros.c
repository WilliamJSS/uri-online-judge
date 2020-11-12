#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,d,e,i=0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	
	if(a%2==0)
		i++;
	if(b%2==0)
		i++;
	if(c%2==0)
		i++;
	if(d%2==0)
		i++;
	if(e%2==0)
		i++;
		
	printf("%d valores pares\n",i);

	system("pause");
	return 0;
}

