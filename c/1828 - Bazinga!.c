#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main()
{
	int i,n;
	char she[10],raj[10];
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		setbuf(stdin,NULL);
		scanf("%s %s",&she,&raj);
		if(strcmp(she,raj)==0)
			printf("Caso #%d: De novo!\n",i);
		else if(strcmp(she,"pedra")==0){
			if(strcmp(raj,"lagarto")==0||strcmp(raj,"tesoura")==0)
				printf("Caso #%d: Bazinga!\n",i);
			else if(strcmp(raj,"papel")==0||strcmp(raj,"Spock")==0)
				printf("Caso #%d: Raj trapaceou!\n",i);
		}
		else if(strcmp(she,"papel")==0){
			if(strcmp(raj,"pedra")==0||strcmp(raj,"Spock")==0)
				printf("Caso #%d: Bazinga!\n",i);
			else if(strcmp(raj,"tesoura")==0||strcmp(raj,"lagarto")==0)
				printf("Caso #%d: Raj trapaceou!\n",i);
		}
		else if(strcmp(she,"tesoura")==0){
			if(strcmp(raj,"lagarto")==0||strcmp(raj,"papel")==0)
				printf("Caso #%d: Bazinga!\n",i);
			else if(strcmp(raj,"pedra")==0||strcmp(raj,"Spock")==0)
				printf("Caso #%d: Raj trapaceou!\n",i);
		}
		else if(strcmp(she,"lagarto")==0){
			if(strcmp(raj,"papel")==0||strcmp(raj,"Spock")==0)
				printf("Caso #%d: Bazinga!\n",i);
			else if(strcmp(raj,"pedra")==0||strcmp(raj,"tesoura")==0)
				printf("Caso #%d: Raj trapaceou!\n",i);
		}
		else if(strcmp(she,"Spock")==0){
			if(strcmp(raj,"tesoura")==0||strcmp(raj,"pedra")==0)
				printf("Caso #%d: Bazinga!\n",i);
			else if(strcmp(raj,"papel")==0||strcmp(raj,"lagarto")==0)
				printf("Caso #%d: Raj trapaceou!\n",i);
		}
	}

	system("pause");
	return 0;
}

