#include<stdio.h>
int main()
{
	//Minh hoa chuong trinh cong, tru, nhan, chia don gian
	int a;
	int b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("a= %d, b= %d",a,b);
	printf("\nTong: %d + %d = %d",a,b,a+ b);
	printf("\nHieu: %d - %d = %d",a,b,a-b);
	printf("\nTich: %d * %d = %d",a,b,a*b);
	printf("\nThuong: %d / %d = %f",a,b,(float)a/b);
	return 0;
}