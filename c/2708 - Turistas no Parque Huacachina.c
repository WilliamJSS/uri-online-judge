#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[7];
	int x,qnt=0,jipe=0;
	
	do{
		setbuf(stdin,NULL);
		scanf("%s",&str);
		if(strcmp(str,"ABEND")!=0)
			scanf("%d",&x);
		
		if(strcmp(str,"SALIDA")==0){
			jipe++;
			qnt+=x;
		}
		else if(strcmp(str,"VUELTA")==0){
			jipe--;
			qnt-=x;
		}
	}while(strcmp(str,"ABEND")!=0);
	
	printf("%d\n%d\n",qnt,jipe);

	system("pause");
	return 0;
}

