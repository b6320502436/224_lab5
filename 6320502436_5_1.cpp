#include<stdio.h>
int main()
{
	int A[10]={},a,b,c,d=0,e,f,g;
	char B[30]={};
	scanf("%s")
	a=stdren(B);
	for(b=0;b<a;b++)
	{
		if(B[d]=='+')
		{
			A[d-1]=A[d]+A[d-1];
			d--;
		}
		if(B[d]=='-')
		{
			A[d-1]=A[d]-A[d-1];
			d--;
		}
		if(B[d]=='*')
		{
			A[d-1]=A[d]*A[d-1];
			d--;
		}
		if(B[b]>=48&&B[b]<=57)
		{
			A[d]=B[b]-48;
			d++;
		}
		
	}
	
}
