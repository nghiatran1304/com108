 /* CHUONG TRINH TINH TIEN DIEN */ 
#include <stdio.h>
#include <conio.h>

// so tien cua tung bac
const double bac1 = 1678; // 0 - 50
const double bac2 = 1734; // 51 - 100
const double bac3 = 2014; // 101 - 200
const double bac4 = 2536; // 201 - 300
const double bac5 = 2834; // 301 - 400
const double bac6 = 2927; // > 401

int main(){
	
	// input
	double soKwH , tienDien;
	printf("Nhap so KwH da su dung : "); scanf("%lf",&soKwH);
	
	// process 
	if( soKwH <= 50 ){
		tienDien = soKwH*bac1;
	}
	else if( soKwH <= 100 ){
		// vd: 60kwh = 50*bac1 + 10*bac2
		tienDien = (50*bac1) + (soKwH-50)*bac2;
	}
	else if( soKwH <= 200 ){
		// vd: 180kwh = 50*bac1 + 50*bac2 + 80*bac3
		tienDien = (50*bac1) + (50*bac2) + (soKwH - 100)*bac3;
	}
	else if( soKwH <= 300){
		tienDien = (50*bac1) + (50*bac2) + (100*bac3) + (soKwH - 200)*bac4;
	}
	else if( soKwH <= 400){
		tienDien = (50*bac1) + (50*bac2) + (100*bac3) + (100*bac4) + (soKwH - 300)*bac5;
	}
	else{
			tienDien = (50*bac1) + (50*bac2) + (100*bac3) + (100*bac4) + (100*bac5) + (soKwH - 400)*bac6;
	}
	
	// output
	printf("Tien dien phai tra : %.2lfVND\n",tienDien);
	
	_getch();
	return 0;
}
