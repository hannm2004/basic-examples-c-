#include<stdio.h>
int main()
{
	int i,n,sum1;
	printf("Nhap n=");
	scanf("%d",&n);
	sum1=0;
	for(i=1;i<=n;i++)
	{
		sum1=sum1+i;
	}
     printf("\nTong 1 + 2 + ... + %d = %ld ", n, sum1);
 }