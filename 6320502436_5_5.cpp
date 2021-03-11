#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int A[a][a]={},c,d,e,f,g,h,i,j,k=0,l,B[100]={},x,max=0;
	for(c=0;c<a;c++)
	{
		for(d=0;d<a;d++)
		{
			scanf("%d",&A[c][d]);
		}
	}
	for(e=0;e<a-b+1;e++)
	{
		for(f=0;f<a-b+1;f++)
		{
			for(i=e;i<e+b;i++)
			{
				for(j=f;j<f+b;j++)
				{
					B[k]=B[k]+A[i][j];
				}
			}
			k++;
			
			
			
		}
	}
	for(x=0;x<10;x++)
	{
		if(max<B[x])
		{
			max=B[x];
		}
		//printf("%d ",B[x]);
	}
	printf("%d",max);
}
