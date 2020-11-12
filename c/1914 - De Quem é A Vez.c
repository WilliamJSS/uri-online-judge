#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char jg1[100],e1[6],jg2[100],e2[6],vencedor[6];
	int n,n1,n2;
	
	scanf("%d",&n);
	
	for(;n>0;n--){
		setbuf(stdin,0);
		scanf("%s %s",&jg1,&e1);
		scanf("%s %s",&jg2,&e2);
		setbuf(stdin,0);
		scanf("%d %d",&n1,&n2);
		
		((n1+n2)%2==0) ? strcpy(vencedor,"PAR") : strcpy(vencedor,"IMPAR");
		
		(strcmp(e1,vencedor)==0) ? printf("%s\n",jg1) : printf("%s\n",jg2);
	}

	system("pause");
	return 0;
}

