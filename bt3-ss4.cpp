#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	{
		printf("%d chia het cho ca 3 va 5",n);
	}
	else if(n%3==0)
	{
		printf("%d chia het cho 3",n);
	}
	else if(n%5==0)
	{
		printf("%d chia het cho 5",n);
	}
	else
	{
		printf("%d khong chia het cho ca 3 va 5",n);
	}
	return 0;
}
