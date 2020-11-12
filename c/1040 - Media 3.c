#include<stdio.h>
#include<stdlib.h>

int main()
{
	float N1,N2,N3,N4,media,mediaf,ex;
	
	scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
	
	media=(N1*2+N2*3+N3*4+N4*1)/10;
	
	if((N1>=0&&N1<=10)&&(N2>=0&&N2<=10)&&(N3>=0&&N3<=10)&&(N4>=0&&N4<=10)){
		
		if(media>=5.0&&media<=6.9)
			scanf("%f",&ex);
		
		printf("Media: %.1f\n",media);
		
		if(media>=7.0)
			printf("Aluno aprovado.\n");
		else if(media>=0&&media<=4.9)
			printf("Aluno reprovado.\n");
		else if(media>=5.0&&media<=6.9)
		{
			printf("Aluno em exame.\n");
			printf("Nota do exame: %.1f\n",ex);
			
			if(ex>=0&&ex<=10)
			{
				mediaf=(media+ex)/2;
				
				if(mediaf>=5){
					printf("Aluno aprovado.\n");
				}
				else{
					printf("Aluno reprovado.\n");
				}
				printf("Media final: %.1f\n",mediaf);			
			}
		}
	}
	system("pause");
	return 0;
}

