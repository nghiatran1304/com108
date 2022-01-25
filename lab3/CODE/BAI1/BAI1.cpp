		/* CHUONG TRINH TINH HOC LUC */
#include <stdio.h>
#include <conio.h>

int main(){
	
	// khai bao nhap diem
	float diem;
	printf("Nhap diem : "); scanf("%f",&diem);
	
	// process + output
	if(diem >= 9){
		printf("Hoc luc xuat sac.");
	}
	else if(diem >= 8){
		printf("Hoc luc gioi.");
	}
	else if(diem >= 6.5){
		printf("Hoc luc kha");
	}
	else if(diem >= 5){
		printf("Hoc luc trung binh.");
	}
	else if(diem >= 3.5){
		printf("Hoc luc yeu.");
	}
	else{
		printf("Hoc luc kem.");
	}
	
	
	
	_getch();
	return 0;
}		

