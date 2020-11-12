#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	
	do{
		scanf("%d",&n);
		
		if(n!=0)
		{
			int m[n][n];
			
			for(i=0;i<n;i++){
				for(j=0;j<=i;j++){
					m[i][j]=i-j+1;
					m[j][i]=m[i][j];
				}
			}
			
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("  %d",m[i][j]);
					if(j<n-1)
						printf("   ");
					else
						printf("\n");
				}
			}
			printf("\n");
		}
		
	}while(n!=0);

	system("pause");
	return 0;
}

