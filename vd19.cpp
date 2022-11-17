#include<stdio.h>
int main() {
	int i,n;
	float sum3;
	printf("Nhap n=");
	scanf("%d",&n);
	sum3=0;
	for(i=1; i<=n; i++) {
		if(i%2==0)
	    sum3=sum3+(float)1/i;
		}
	printf("\n1/1+1/2+..1/%d=%f",n,sum3);
}