#include<stdio.h>
#include<math.h>

int main()
{
	double R,VOLUME;
	const double pi = 3.14159;
	
	scanf("%lf",&R);
	
	if(R>0){
		VOLUME = ((4.0/3)*pi)*pow(R,3);
		
		printf("VOLUME = %.3lf\n",VOLUME);

	}else{
		return 0;
	}
	return 0;
}
