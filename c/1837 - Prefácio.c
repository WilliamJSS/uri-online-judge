#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,q,r;
    
    scanf("%d %d",&a,&b);
    
    if(a>=0){
    	q=a/b;
    	r=a%b;
	}else{
		q=a/b;
		
		if(b>0){
			while(q*b>a)
				q--;
		}else{
			while(q*b>a)
				q++;
		}
		
		r=a-(q*b);
	}
    
    printf("%d %d\n",q,r);
    
    system("pause");
    return 0;
}
