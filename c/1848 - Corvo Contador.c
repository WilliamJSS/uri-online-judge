#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,e,pos,x,pot,num=0;
	char str[10];
	
	for(i=1;i<=3;i++,num=0){
		do{
			setbuf(stdin,NULL);
			gets(str);
			if(strcmp(str,"caw caw")!=0){
				for(e=2,pos=0;pos<=2;pos++,e--){
					pot=pow(2,e);
					if(str[pos]=='-') x=0;
					else x=1;
					num+=pot*x;
				}
			}
		}while(strcmp(str,"caw caw")!=0);
		printf("%d\n",num);
	}

	system("pause");
	return 0;
}

