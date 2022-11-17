#include<stdio.h>
int main()
{
	printf("\tChuong trinh in ra bang ma ASCII");
	int i;
    for (i=0;i<256;i++)
	{
		printf("\t%d: %c",i,i);
	}
	return 0;
}