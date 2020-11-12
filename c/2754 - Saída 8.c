#include<stdio.h>
#include<stdlib.h>

int main()
{
	double x=234.345,y=45.698,xaux=234.345,yaux=45.698;
	int ex=0,ey=0;
	
	printf("%.6f - %.6f\n",x,y);
	printf("%.0f - %.0f\n",x,y);
	printf("%.1f - %.1f\n",x,y);
	printf("234.34 - %.2f\n",y);
	printf("%.3f - %.3f\n",x,y);

	while(xaux>=10){
		ex++;
		xaux/=10;
	}
	while(yaux>=10){
		ey++;
		yaux/=10;
	}
	printf("%fe+0%d - %fe+0%d\n",xaux,ex,yaux,ey);
	printf("%fE+0%d - %fE+0%d\n",xaux,ex,yaux,ey);
	printf("%.3f - %.3f\n",x,y);
	printf("%.3f - %.3f\n",x,y);

	system("pause");
	return 0;
}

