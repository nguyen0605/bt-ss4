#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int ngay,thang,nam,namNhuan;
	printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if(nam>=1)
    {
    	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    	{
    		namNhuan=1;
		}
		else
		{
			namNhuan=0;
		}
	}
	else
	{
		printf("So nam khong hop le!");
	}
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(ngay<=31 && ngay>0)
			{
				printf("Ngay thang nam hop le: %02d/%02d/%d",ngay,thang,nam);
			}
			else
			{
				printf("Ngay khong hop le!");
			}
			break;
		case 4: case 6: case 9: case 11:
			if(ngay<=30 && ngay>0)
			{
				printf("Ngay thang nam hop le: %02d/%02d/%d",ngay,thang,nam);			
			}
			else
			{
				printf("Ngay khong hop le!");
			}
            break;
        case 2:
        	if(namNhuan==1)
            {
            	if(ngay>0 && ngay<=29)
            	{
            		printf("Ngay thang nam hop le: %02d/%02d/%d",ngay,thang,nam);
				}
				else
				{
					printf("Ngay khong hop le!");
				}
			}
			else
			{
				if(ngay>0 && ngay<=28)
				{
					printf("Ngay thang nam hop le: %02d/%02d/%d",ngay,thang,nam);
				}
				else
				{
					printf("Ngay khong hop le!");
				}
			}
            break;
        default:
            printf("So thang khong hop le\n");
            break;
    }
	return 0;
}
