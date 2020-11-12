#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade,r;
	
	scanf("%d",&idade);
	
	r=idade/365;
	printf("%d ano(s)\n",r);
	idade=idade%365; r=idade/30;
	printf("%d mes(es)\n",r);
	r=idade%30;
	printf("%d dia(s)\n",r);

	system("pause");
	return 0;
}

