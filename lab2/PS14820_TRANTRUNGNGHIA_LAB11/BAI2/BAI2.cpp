	/* CHUONG TRINH TINH CHU VI VA DIEN TICH HINH CHU NHAT*/
	
#include <stdio.h>
#include <conio.h>

int main(){
	
	// khai bao cac bien.
	double chieuDai , chieuRong, chuVi , dienTich;
	
	// Nhap chieuDai va chieuRong
	printf("Nhap chieu dai : "); 
	scanf("%lf",&chieuDai);
	
	printf("Nhap chieu rong : "); 
	scanf("%lf",&chieuRong);
	
	// xu ly tinh toan chu vi va dien tich
	chuVi = (chieuDai + chieuRong) * 2;
	dienTich = chieuDai * chieuRong;
	
	// xuat ket qua
	printf("Chu vi hinh chu nhat : %.2lf\n",chuVi);
	printf("Dien tich hinh chu nhat : %.2lf",dienTich);
	
	_getch();
	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
