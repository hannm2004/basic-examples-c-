#include<stdio.h>
int main()
{
	//chuong trình in ra man hinh gia tri tang dan
	printf("\tChuong trinh sap xep ba so tang dan");
	//khai bao bien
	int a, b, c;
	int x1, x2, x3;
	printf("\nNhap vao a, b, c:");
	scanf("%d%d%d",&a,&b,&c);
	//tinh toan xu ly
	x1=(a>b)?b:a;
	x1=(x1>c)?c:x1;
	x3=(a>b)?a:b;
	x3=(x3>c)?x3:c;
	if(a=x1)
	{
		x2=(b>c)?c:b;
	}
	else
	{
		if(a==x3)
		{
			x2=(b>c)?b:c;
		}
		else 
		{
			x2=a;
		}
	}
	printf("\nSau khi sap xep %d %d %d", x1,x2,x3);
}