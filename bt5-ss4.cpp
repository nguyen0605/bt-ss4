#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1,n2,n3;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&n1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&n2);
	printf("Nhap vao so thu ba: ");
	scanf("%d",&n3);
	if(n3>n1 && n3<n2)
	{
		printf("%d co nam giua %d va %d",n3,n1,n2);
	}
	else
	{
		printf("%d khong nam giua %d va %d",n3,n1,n2);
	}
	return 0;
}
