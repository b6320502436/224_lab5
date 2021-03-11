#include<stdio.h>
#include<string.h>
int main()
{
	int A[10]={},a,b,c,d=0,e,f,g,x,y;
	
	scanf("%d",&x);
	char B[x*2+1]={};
	scanf("%s",B);
	
	for(b=0;b<30;b++)
	{
		if(B[b]=='+')
		{
			A[d-1]=A[d]+A[d-1];
			d--;
		}
		if(B[b]=='-')
		{
			A[d-1]=A[d]-A[d-1];
			d--;
		}
		if(B[b]=='*')
		{
			A[d-1]=A[d]*A[d-1];
			d--;
		}
		if(B[b]>=48&&B[b]<=57)
		{
			A[b]=B[b]-48;
			b++;
		}
		if(B[b]>=48&&B[b]<=57&&B[b+1]>=48&&B[b+1]<=57)
		{
			A[b]=(B[b]-48)*10+B[b+1];
			b++;
			d++;
		}
		else;
		for(y=0;y<10;y++)
	    printf("%d",A[y]);
		
	}
	for(b=0;b<x;b++)
	printf("%d",A[b]);
}
