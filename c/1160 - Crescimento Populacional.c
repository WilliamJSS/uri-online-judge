#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t,pa,pb,i,anos=1;
	double g1,g2,a,b;
	
	scanf("%d",&t);
	
	for(i=1;i<=t;i++,anos=1)
	{
		scanf("%d %d",&pa,&pb);
		scanf("%lf %lf",&g1,&g2);
		a=pa*g1/100; b=pb*g2/100;
		while(pa<pb){
			pa+=a; 
			pb+=b;
			if(pa<=pb)
				anos++;
			a=pa*g1/100; b=pb*g2/100;
			if(anos==101)
				pa=pb;
		}
		if(anos>100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n",anos);
	}

	system("pause");
	return 0;
}
