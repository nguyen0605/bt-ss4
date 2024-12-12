#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int year;
	printf("Hay nhap vao so nam: ");
	scanf("%ld", &year);
	if(year%4==0)
	{
		if(year%100==0 && year %400==0)
		{
			printf("%ld la nam nhuan",year);
		}
		else
		{
			printf("%ld khong phai la nam nhuan",year);
		}
	}
	else
	{
		printf("%ld khong phai la nam nhuan",year);
	}
	return 0;
}
