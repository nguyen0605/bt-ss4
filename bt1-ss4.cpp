#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("%d la so am\n",n);
	}
	else if(n==0) 
	{
		printf("%d la so trung tinh\n",n);
	}
	else 
	{
		printf("%d la so duong\n",n);
	}
	return 0;
}
