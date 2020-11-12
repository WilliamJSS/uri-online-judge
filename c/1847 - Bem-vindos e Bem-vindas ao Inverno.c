#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t1,t2,t3;
	
	scanf("%d %d %d",&t1,&t2,&t3);
	
	if(t2-t1>0){
		(t3-t2>0&&t3-t2>=t2-t1)? printf(":)\n") : printf(":(\n");
	}else if(t2-t1<0){
		(t3-t2>=0||t3-t2>t2-t1)? printf(":)\n") : printf(":(\n");
	}else{
		(t3-t2>0)? printf(":)\n") : printf(":(\n");
	}

	system("pause");
	return 0;
}
