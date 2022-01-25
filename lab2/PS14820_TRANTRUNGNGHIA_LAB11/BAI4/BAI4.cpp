			 /* CHUONG TRINH TINH DIEM TRUNG BINH*/
#include <stdio.h>
#include <conio.h> // _getch()
 
int main(){
 	
 	// khai bao bien
 	double dToan , dLy , dHoa , dTB;
 	
 	// thong bao va nhap gia tri cho bien
 	printf("Nhap diem Toan : "); 
	scanf("%lf",&dToan);
 	printf("Nhap diem Ly : "); 
	scanf("%lf",&dLy);
 	printf("Nhap diem Hoa : "); 
	scanf("%lf",&dHoa);
 	
 	// xu ly
 	/*
 		he so toan : x3 , he so ly : x2 , he so hoa : x1 
 		=> tong he so = 6
 	*/
	dTB = ( (dToan * 3) + (dLy * 2) + dHoa) / 6; 
 	
 	// xuat ket qua
 	printf("Diem trung binh : %.2lf diem",dTB);
 	
 	// stop chuong trinh cho ngDung press anykey. 
 	_getch();
 	return 0;
}
