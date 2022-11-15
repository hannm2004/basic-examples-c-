#include<stdio.h>
int main() {
	printf("Chuong trinh nhap ngay ");
	int a;
	printf("\nNhap mot ngay bat ki trong tuan ");
	scanf("%d",&a);
	switch (a) {
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		case 8:
			printf("Sunday");
			break;
		default:
			printf("khong thuoc ngay tuan");
	}
	return 0;
}