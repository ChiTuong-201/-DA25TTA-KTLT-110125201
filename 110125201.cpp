#include<stdio.h>
int main()
{
	int a,b;
	int tong,hieu,tich;
	float thuong;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	printf("\nNhap so nguyen b:");
	scanf("%d",&b);
	//tinh tong
	tong=a+b;
	printf("\nTong hai so nguyen la:%d",tong);
	//tinh hieu
	hieu=a-b;
	printf("\nHieu hai so nguyen la:%d",hieu);
	//tinh tich
	tich=a*b;
	printf("\nTich hai so nguyen la :%d",tich);
	//tinh thuong
	thuong=1.0*a/b;
	printf("\nThuong cua hai so nguyen la:%3.2f",thuong);
	return 0;
}