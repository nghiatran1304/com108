	// TINH DIEN TICH TAM GIAC
#include <stdio.h>
#include <conio.h>

int main(){
	
	// khai bao bien
	double chieuCao , canhDay , dTich;	
	
	// nhap xuat
	printf("Nhap chieu cao : ");
	scanf("%lf",&chieuCao);
	printf("Nhap canh day : ");
	scanf("%lf",&canhDay);
	
	// tinh toan
	dTich = 0.5 * chieuCao*canhDay;
	
	// xuat ket qua
	printf("\nDien tich tam giac : %.2lf",dTich);
	
	_getch();
	return 0;
}
