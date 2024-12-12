#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("Nhap so thu ba: ");
	scanf("%d",&c);
	if(a>b && b>c)
	{
		printf("Xep theo thu tu tu nho den lon: %d %d %d",c,b,a);
	}
	else if(a>c && c>b)
	{
		printf("Xep theo thu tu tu nho den lon: %d %d %d",b,c,a);
	}
	else if(b>a && a>c)
	{
		printf("Xep theo thu tu tu nho den lon: %d %d %d",c,a,b);
	}
	else if(b>c && c>a)
	{
		printf("Xep theo thu tu tu nho den lon: %d %d %d",a,c,b);
	}
	else if(c>a && a>b)
	{
		printf("Xep theo thu tu tu nho den lon: %d %d %d",b,a,c);
	}
	else
	{
		printf("Xep theo thu tu tu nho den lon: %d %d %d",a,b,c);
	}
	return 0;
}
