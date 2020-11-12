#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,d,e;
	int par=0,imp=0,pos=0,neg=0;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a>0)
		pos++;
	else if(a<0)
		neg++;
	if(b>0)
		pos++;
	else if(b<0)
		neg++;
	if(c>0)
		pos++;
	else if(c<0)
		neg++;
	if(d>0)
		pos++;
	else if(d<0)
		neg++;
	if(e>0)
		pos++;
	else if(e<0)
		neg++;
	if(a%2==0)
		par++;
	else
		imp++;
	if(b%2==0)
		par++;
	else
		imp++;
	if(c%2==0)
		par++;
	else
		imp++;
	if(d%2==0)
		par++;
	else
		imp++;
	if(e%2==0)
		par++;
	else
		imp++;
	
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",imp);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);

	system("pause");
	return 0;
}

