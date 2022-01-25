 	/* TINH KHOANG CACH GIUA 2 DIEM AB TRONG MAT PHANG TOA DO*/

#include <stdio.h>
#include <conio.h>
#include <math.h> // dung sqrt() va pow()
 
int main(){
	
	// khai bao cac bien diem toa do	
	double xA, yA , xB , yB , khoangCach;
	
	printf("Nhap xA : "); scanf("%lf",&xA);
	printf("Nhap yA : "); scanf("%lf",&yA);
	printf("Nhap xB : "); scanf("%lf",&xB);
	printf("Nhap yB : "); scanf("%lf",&yB);
	
	// xu ly
	khoangCach = sqrt( pow((xB - xA), 2) + pow((yB - yA), 2) );
	
	// xuat ra man hinh ket qua
	printf("Khoang cach giua 2 diem : %.2lf",khoangCach);
	
	
	_getch();
	return 0;
}
