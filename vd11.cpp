#include<stdio.h>
int main() 
{
	printf("\tChuong trinh nhap ba canh tam giac");
	//khai bao bien
	float a, b, c;
	//nhap input
	printf("\nNhap vao a:");
	scanf("%f",&a);
	printf("\nNhap vao b:");
	scanf("%f",&b);
	printf("\nNhap vao c:");
	scanf("%f",&c);
	//xu li va in ket qua
	if (a+b>c && a+c>b && b+c>a) 
	{
		printf("\na, b, c tao thanh tam giac");
	} 
	else 
	{
		printf("\na, b, c khong tao thanh tam giac");
	}
}