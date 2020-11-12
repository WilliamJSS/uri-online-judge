#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d1,d2,h1,h2,m1,m2,s1,s2;
	int d,h,m,s;
	
	printf("Dia ");
	scanf("%d",&d1);
	scanf("%d",&h1); scanf("%d",&m1); scanf("%d",&s1);
	printf("Dia ");
	scanf("%d",&d2);
	scanf("%d",&h2); scanf("%d",&m2); scanf("%d",&s2);
	
	if(s1>s2){
		s2+=60; m2--;
	}if(m1>m2){
		m2+=60; h2--;
	}if(h1>h2){
		h2+=24; d2--;
	}
	d=d2-d1;
	h=h2-h1;
	m=m2-m1;
	s=s2-s1;
	
	printf("%d dia(s)\n",d);
	printf("%d hora(s)\n",h);
	printf("%d minuto(s)\n",m);
	printf("%d segundo(s)\n",s);
	
	system("pause");
	return 0;
}
