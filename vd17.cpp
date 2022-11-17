#include<stdio.h>
int main() {
	int i,n,sum2;
	printf("Nhap n=");
	scanf("%d",&n);
	sum2=0;
	for(i=1; i<=n; i++) {
		if(i%2==0) sum2= sum2-i;
		else sum2=sum2+i;
	}
	printf("\n1-2+3-4+...(+/-)%d=%ld",n,sum2);
}