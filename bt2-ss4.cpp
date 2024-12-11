#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d la so chan",n);
	}
	else
	{
		printf("%d la so le",n);
	}
	return 0;
}
