#include<stdio.h>
int main () {
	printf("Chuong trinh may tinh bo tui:");
	float a, b, x;
	char op[1];
	printf("\nNhap a=");
	scanf("%f",&a);
	printf("\nNhap b=");
	scanf("%f",&b);
	printf("\nNhap phep toan(+,-,*,/):");
	scanf("%s",&op);
	if(op[0]=='+')
		x=a+b;

	if(op[0]=='-')
		x=a-b;

	if(op[0]=='*')
		x=a*b;
		
	if(op[0]=='/') {
		if(b==0) {
			printf("\nKhong chia duoc cho 0");
			return 0;
		}
		x=a/b;
	}
	printf("\n%f %s %f",a,op,b,x);
	return 0;
}