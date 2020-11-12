#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,tam;
	char str[1000],str2[1000];
	
	scanf("%d",&n);
	
	setbuf(stdin,NULL);
	
	for(;n>0;n--){
		gets(str);
		tam=strlen(str);
		for(i=0;i<tam;i++){
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
				str[i]+=3;
			str2[tam-1-i]=str[i];
			if(i>=tam/2)
				str2[i]--;
		}
		str2[tam]='\0';
		printf("%s\n",str2);
	}

	system("pause");
	return 0;
}
