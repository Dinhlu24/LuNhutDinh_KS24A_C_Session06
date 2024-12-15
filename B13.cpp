#include <stdio.h>

int main(){
	int day,month;
	printf("Moi nhap vao ngay sinh: ");	scanf("%d", &day);
	printf("Moi nhap vao thang sinh: ");	scanf("%d", &month);
	
	switch(month){
		case 1:
			{
				if(day > 0 && day <= 19)	printf("Cung hoang dao cua ban la: Ma Ket");
				else if(day > 19 && day <= 31)	printf("Cung hoang dao cua ban la: Bao Binh");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 2:
			{
				if(day > 0 && day <= 18)	printf("Cung hoang dao cua ban la: Bao Binh");
				else if(day > 18 && day <= 29)	printf("Cung hoang dao cua ban la: Song Ngu");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 3:
			{
				if(day > 0 && day <= 20)	printf("Cung hoang dao cua ban la: Song Ngu");
				else if(day > 20 && day <= 31)	printf("Cung hoang dao cua ban la: Bach Duong");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 4:
			{
				if(day > 0 && day <= 20)	printf("Cung hoang dao cua ban la: Bach Duong");
				else if(day > 20 && day <= 30)	printf("Cung hoang dao cua ban la: Kim Nguu");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 5:
			{
				if(day > 0 && day <= 20)	printf("Cung hoang dao cua ban la: Kim Nguu");
				else if(day > 20 && day <= 31)	printf("Cung hoang dao cua ban la: Song Tu");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 6:
			{
				if(day > 0 && day <= 21)	printf("Cung hoang dao cua ban la: Song Tu");
				else if(day > 21 && day <= 30)	printf("Cung hoang dao cua ban la: Cu Giai");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 7:
			{
				if(day > 0 && day <= 22)	printf("Cung hoang dao cua ban la: Cu Giai");
				else if(day > 22 && day <= 31)	printf("Cung hoang dao cua ban la: Su Tu");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 8:
			{
				if(day > 0 && day <= 22)	printf("Cung hoang dao cua ban la: Su Tu");
				else if(day > 22 && day <= 31)	printf("Cung hoang dao cua ban la: Xu Nu");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 9:
			{
				if(day > 0 && day <= 22)	printf("Cung hoang dao cua ban la: Xu Nu");
				else if(day > 22 && day <= 30)	printf("Cung hoang dao cua ban la: Thien Binh");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 10:
			{
				if(day > 0 && day <= 23)	printf("Cung hoang dao cua ban la: Thien Binh");
				else if(day > 23 && day <= 31)	printf("Cung hoang dao cua ban la: Bo Cap");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 11:
			{
				if(day > 0 && day <= 22)	printf("Cung hoang dao cua ban la: Bo Cap");
				else if(day > 22 && day <= 30)	printf("Cung hoang dao cua ban la: Nhan Ma");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		case 12:
			{
				if(day > 0 && day <= 21)	printf("Cung hoang dao cua ban la: Nhan Ma");
				else if(day > 21 && day <= 31)	printf("Cung hoang dao cua ban la: Ma Ket");
				else	printf("Ngay nhap vao khong hop le");
			}
			break;
		default:
			printf("Khong the tim ra cung hoang dao cua ban vui long kiem tra lai thang cua ban");
	}
}
