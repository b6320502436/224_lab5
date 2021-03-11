#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,x,y,z;
	scanf("%d",&a);
	if(a%2==0)
	{
		b=1;
	}
	else b=0;
	if(b==1)
	{
		c=(a-1)/2;
	}else c=a/2;
	for(x=0;x<a;x++)
	{
		for(y=x;y<c;y++)
		{
			printf("-");
		}
			if(x<c+1)
		{
		printf("*");
	}
		if(x!=0&&x<c+1)
		{
			for(z=x;z>0;z--)
			printf("-");
			for(z=x-1;z>0;z--)
			printf("-");
		}
			if(x<c+1&&x!=0)
		{
		printf("*");
	}
		for(y=x;y<c;y++)
		{
			printf("-");
		}
//s
			
		
		
		printf("\n");
	}
	
	
	
	
	
	
		
}
