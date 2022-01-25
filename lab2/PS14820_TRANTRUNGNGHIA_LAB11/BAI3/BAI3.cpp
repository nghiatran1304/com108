	 /* CHUONG TRINH TINH CHU VI VA DIEN TICH HINH TRON */ 
 
#include <stdio.h>
#include <conio.h>
 
#define PI 3.14; // dinh nghia hang so PI
 
int main(){
 	
 	// khai bao cac bien
 	double banKinh , chuVi , dienTich;
 	
 	// nhap bien
 	printf("Nhap vao ban kinh hinh tron : ");
 	scanf("%lf",&banKinh);
 	
 	// xu ly tinh toan chu vi va dien tich hinh tron
 	chuVi = 2 * banKinh * PI;
 	dienTich = banKinh * banKinh * PI;
 	
 	// xuat ket qua
 	printf("Chu vi hinh tron : %.2lf \n",chuVi);
 	printf("Dien tich hinh tron : %.2lf",dienTich);
 	
 	_getch();
 	return 0;
}
