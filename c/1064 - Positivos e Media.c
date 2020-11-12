#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a,b,c,d,e,f;
	float ax=0,bx=0,cx=0,dx=0,ex=0,fx=0;
	int p=0;
	
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	
	if(a>0||b>0|c>0||d>0||e>0||f>0){
		if(a>0){
			p++;
			ax=a;
		}
		if(b>0){
		 	p++;
		 	bx=b;
		}
		if(c>0){
		 	p++;
		 	cx=c;
		}
		if(d>0){
		 	p++;
		 	dx=d;
		}
		if(e>0){
		 	p++;
		 	ex=e;
		}
		if(f>0){
		 	p++;
		 	fx=f;
		}
		printf("%d valores positivos\n",p);
		printf("%.1f\n",(ax+bx+cx+dx+ex+fx)/p);
	}

	system("pause");
	return 0;
}

