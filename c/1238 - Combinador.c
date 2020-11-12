#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,p1=0,p2=0;
	char str1[50],str2[50];
	
	scanf("%d",&n);
	
	setbuf(stdin,NULL);
	
	for(;n>0;n--,p1=0,p2=0)
	{
		scanf("%s %s",&str1,&str2);
		
		while(p1+p2<strlen(str1)+strlen(str2)){
			if(p1<strlen(str1)){
				printf("%c",str1[p1]);
				p1++;
			}
			if(p2<strlen(str2)){
				printf("%c",str2[p2]);
				p2++;
			}
		}
		printf("\n");
	}
	

	system("pause");
	return 0;
}

