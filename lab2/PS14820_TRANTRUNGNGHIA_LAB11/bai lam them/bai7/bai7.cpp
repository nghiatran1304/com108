#include <stdio.h>
#include <conio.h>

int main(){
	// khai bao bien
	int a , tong = 0 , bienLuu;
	int bienTam1 , bienTam2 , bienTam3 , bienTam4;
	// nhap du lieu
	printf("Nhap vao 1 so ( 4 chu so) : ");
	scanf("%d",&a); // 1234
	
	bienLuu = a; // 1234
	
	// tinh toan
	 	// vd : 1234 
	bienTam1 =  a % 10; // bienTam1 = 4
	tong += bienTam1; // tong = 4
	a /= 10; // cap nhap lai gia tri cho a => a = 123
	
	bienTam2 =  a % 10; // bienTam2 = 3
	tong += bienTam2; // tong  = 7
	a /= 10; // a = 12
	
	bienTam3 =  a % 10; // bienTam3 = 2 
	tong += bienTam3; // tong = 9
	a /= 10; // a = 1

	bienTam4 =  a % 10; // bienTam4 = 1
	tong += bienTam4; // tong = 10
	
	// xuat ket qua
	printf("Tong cac chu so %d la %d + %d + %d + %d = %d\n",bienLuu,bienTam4,bienTam3,bienTam2,bienTam1,tong);
	
	_getch();
	return 0;
}






