#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i;
	char str[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		printf("%c",str[i]);
		
	printf("\n");

	system("pause");
	return 0;
}

