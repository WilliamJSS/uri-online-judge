#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,ax,bx,cx,t;
	
	scanf("%d %d %d",&a,&b,&c);
	
	ax=a; bx=b; cx=c;
	
	if(a>b){
		t=a; a=b; b=t;
	}if(b>c){
		t=b; b=c; c=t;
	}if(a>b){
		t=a; a=b; b=t;
	}
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,ax,bx,cx);

	system("pause");
	return 0;
}

