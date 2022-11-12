#include<stdio.h>
int main () {
	float a,b,x;
	//Day la chuong trinh giai phuong trinh bac 1
	printf("\nNhap a=");
	scanf("%f",&a);
	printf("Nhap b=");
	scanf("%f",&b);
	printf("Giai phuong trinh %.2fx + %.2f=0",a,b);
	if(a==0) {
		//khoi lenh 1
		if(b==0) {
			printf("Phuong trinh vo so nghiem ");
			return 0;
		}
		printf("Phuong trinh vo nghiem");
		return 0;
	}
}
x=-b/a;
printf("\nPhuong trinh co nghiem x=%f",x);

return 0;


}