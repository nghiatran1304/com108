					/* CHUONG TRINH TINH TONG HIEU TICH THUONG 2 SO */
#include <stdio.h>
#include <conio.h>

int main(){
	
	// khai bao bien
	double a , b , tong , hieu , tich , thuong; 
	
	// thong bao va nhap lieu 2 bien a , b
	printf("Nhap a : "); 
	scanf("%lf",&a); 
	printf("Nhap b : "); 
	scanf("%lf",&b);
	
	// xu ly
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;
	
	// xuat ra man hinh ket qua
	printf("Tong cua %.2lf + %.2lf = %.2lf\n",a,b,tong);
	printf("Hieu cua %.2lf - %.2lf = %.2lf\n",a,b,hieu);
	printf("Tich cua %.2lf * %.2lf = %.2lf\n",a,b,tich);
	printf("Thuong cua %.2lf / %.2lf = %.2lf\n",a,b,thuong);
	
	_getch();
	return 0;
}

