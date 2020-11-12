#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a,b,c;
	int maiorAB;
	
	scanf("%d %d %d",&a,&b,&c);
	
	maiorAB=(a+b+abs(a-b))/2;
	
	if(maiorAB>c)
		printf("%d eh o maior\n",maiorAB);
	else
		printf("%d eh o maior\n",c);

	system("pause");
	return 0;
}
