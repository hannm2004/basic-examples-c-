#include<stdio.h>
int main() {
	printf("\tChuong trinh dem so co 1 chu so");
	int x;
	printf("\nNhap so x tu (0-9)=");
	scanf("%d",&x);
//	if(x<0||x>9) {
//		printf("So ngoai pham vi (0-9)");
//	} else {
//		if(x==0)
//			printf("Khong");
//		if(x==1)
//			printf("Mot");
//		if(x==2)
//			printf("Hai");
//		if(x==3)
//			printf("Ba");
//		if(x==4)
//			printf("Bon");
//		if(x==5)
//			printf("Nam");
//		if(x==6)
//			printf("Sau");
//		if(x==7)
//			printf("Bay");
//		if(x==8)
//			printf("Tam");
//		if(x==9)
//			printf("Chin");
	switch(x) {
		case 0:
			printf("Khong");
			break;
		case 1:
			printf("Mot");
			break;
		case 2:
			printf("Hai");
			break;
		case 3:
			printf("Ba");
			break;
		case 4:
			printf("Bon");
			break;
		case 5:
			printf("Nam");
			break;
		case 6:
			printf("Sau");
			break;
		case 7:
			printf("Bay");
			break;
		case 8:
			printf("Tam");
			break;
		case 9:
			printf("Chin");
			break;
		default:
			printf("%d khong nam trong (0-9)",x);
	}
	return 0;

}