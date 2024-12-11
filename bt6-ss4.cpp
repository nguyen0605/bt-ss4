#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int ChiSoCu, ChiSoMoi, SoDien, TienDien;
	printf("Nhap vao chi so cu: ");
	scanf("%d",&ChiSoCu);
	printf("Nhap vao chi so moi: ");
	scanf("%d",&ChiSoMoi);
	SoDien=ChiSoMoi-ChiSoCu;
	if(SoDien<0)
	{
		printf("So nhap vao khong hop le!");
	}
	else
	{
		if(SoDien>=0 && SoDien<50)
	{
		TienDien=SoDien*10000;
	}
	else if(SoDien>=50 && SoDien<100)
	{
		TienDien=SoDien*15000;
	}
	else if(SoDien>=100 && SoDien<150)
	{
		TienDien=SoDien*20000;
	}
	else if(SoDien>=150 && SoDien<200)
	{
		TienDien=SoDien*25000;
	}
	else if(SoDien>=200)
	{
		TienDien=SoDien*30000;
	}
	printf("So tien dien phai tra la %ld dong\n", TienDien);
	}
	return 0;
}
