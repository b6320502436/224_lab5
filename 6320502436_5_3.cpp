#include<stdio.h>
int main()
{
	int a,b=1,c,d,e,A[100000]={},g;
	for(a=1;a<100000;a++)
	{
		d=a;
		for(e=0;;e++)
			{
				if(d%2==0)
				{
					d=d/2;
				}
				else break;
			}
		for(e=0;;e++)
			{
				if(d%3==0)
				{
					d=d/3;
				}
				else break;
			}
		for(e=0;;e++)
			{
				if(d%5==0)
				{
					d=d/5;
				}
				else break;
			}
		if(d==1)
		{
			A[b]=a;
			//printf("%d ",A[b]);
			b++;
		}
	}
	scanf("%d",&g);
	printf("%d",A[g]);
	return 0;
}
