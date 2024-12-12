#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c;
	printf("Nhap vao canh a: ");
	scanf("%f",&a);
	printf("Nhap vao canh b: ");
	scanf("%f",&b);
	printf("Nhap vao canh c: ");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		printf("Day la 3 canh cua tam giac");
	}
	else
	{
		printf("Khong phai 3 canh cua tam giac");
	}
	return 0;
}
