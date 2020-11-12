#include<stdio.h>
#include<math.h>

void primo(int numero);

int main()
{
	int n,x;
	
	scanf("%d",&n);
	
	for(;n>0;n--){
		scanf("%d",&x);
		primo(x);
	}

	return 0;
}

void primo(int x)
{
	int i;
	
	for(i=2;i<sqrt(x);i++){
		if(x%i==0){
			printf("Not Prime\n");
			return;
		}
	}
	printf("Prime\n");
}
