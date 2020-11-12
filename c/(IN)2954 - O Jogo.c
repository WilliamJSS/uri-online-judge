#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,cont,rep=0,k=0;
	char str[100000],jogo[4],perdi[5];
	
	scanf("%d",&n);
	
	setbuf(stdin,NULL);
	
	for(;n>0;n--){
		cont=0; rep=0;
		gets(str);
		for(i=0;i<strlen(str);i++){
				
			if(str[i]!='.'&&str[i]!=','&&str[i]!=' ')
			{	
				cont++;
			
				if(str[i]=='j'||str[i]=='J')
				{
					for(k=0;k<4;k++){
						if(str[i+k]>='A'&&str[i+k]<='Z')
							str[i+k]+=32;
							
						jogo[k]=str[i+k];
					}
					if(strcmp(jogo,"jogo")==0){
						cont+=3;
						i+=3;
						if(cont>rep)
							rep=cont;
						cont=0;
					}
				}
				else if(str[i]=='p'||str[i]=='P')
				{
					for(k=0;k<5;k++){
						if(str[i+k]>='A'&&str[i+k]<='Z')
							str[i+k]+=32;
							
						perdi[k]=str[i+k];
					}
					if(strcmp(perdi,"perdi")==0){
						cont+=4;
						i+=4;
						if(cont>rep)
							rep=cont;
						cont=0;
					}
				}	
			}
		}
		
		printf("%d\n",rep);
		
	}

	system("pause");
	return 0;
}

