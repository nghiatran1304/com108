 					/* MENU CHUONG TRINH*/
 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	do{
		system("cls");
		printf("\t\t|----------MENU----------|\n");
		printf("\t\t| 1. Tinh hoc luc.  \t |\n");
		printf("\t\t| 2. Tinh Pt bac 1.  \t |\n");
		printf("\t\t| 3. Tinh Pt bac 2.  \t |\n");
		printf("\t\t| 4. Tinh tien dien.  \t |\n");
		printf("\t\t| 5. Thoat.  \t\t |\n");
		printf("\t\t|------------------------|\n");
		
		
		short int luaChon;
		printf("Nhap lua chon : "); scanf("%hd",&luaChon);
		
		switch(luaChon){
			case 1 :	
					printf("\n\t\tCHUONG TRINH TINH HOC LUC \n");
					
					float diem;
					printf("Nhap diem : "); scanf("%f",&diem);
	
					// xu ly
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
				break;
			
			case 2 :{
					printf("\n\t\tCHUONG TRINH TINH PHUONG TRINH BAC NHAT \n");
					
	
					printf("\tPHUONG TRINH BAC 1 CO DANG : ax + b = 0\n");
					double a , b , x; 
					
					printf("Nhap he so a : "); scanf("%lf",&a);
					printf("Nhap he so b : "); scanf("%lf",&b);
	
					if(a == 0){
						if(b == 0){
							printf("Phuong trinh vo so nghiem.\n");
						}else{
							printf("Phuong trinh vo nghiem.\n");
						}
					}
					else{
							// xu ly khi a != 0
						x = (-b/a);
						printf("Phuong trinh co nghiem x = -b/a = %.2lf",x);
					}
					
				break;
				} 
			case 3 :{
							
					 printf("\n\t\tCHUONG TRINH TINH PHUONG TRINH BAC 2 \n");
					 printf("\tPHUONG TRINH BAC 2 CO DANG : ax%c + bx + c = 0\n",253);
	 
					double a, b ,c ,x1 ,x2 , delta ;
					
					printf("Nhap he so a : ");scanf("%lf",&a);
					printf("Nhap he so b : ");scanf("%lf",&b);
					printf("Nhap he so c : ");scanf("%lf",&c);
						
						// process -- output
					if(a == 0){
						if(b == 0){
							if(c == 0){
								printf("Phuong trinh vo so nghiem.\n");
							}
							else{
								printf("Phuong trinh vo nghiem.\n");
							}
						}
						else{
								// xu ly khi b != 0
							x1 = (-c/b);
							printf("Phuong trinh co nghiem x = -b/a = %.2lf",x1);
						}
					}
					else{
						delta = b*b - 4*a*c;
						if(delta < 0){
							printf("Phuong trinh vo nghiem.\n");
						}
						else if(delta == 0){
							x1 = x2 = -b/(2*a);
							printf("Phuong trinh co nghie kep x = -b/(2*a) = %.2lf",x1);
						}
						else{
							x1 = (-b + sqrt(delta)) / (2 * a);
							x2 = (-b - sqrt(delta)) / (2 * a);
							printf("Phuong trinh co 2 nghiem phan biet. \n");
							printf("x1 = %.2lf\n", x1);
							printf("x2 = %.2lf", x2);
						}
					}
				break;
		}
			case 4 : {		
					printf("\n\t\tCHUONG TRINH TINH TIEN DIEN\n");
			
					double bac1 = 1678; // 0 - 50
					double bac2 = 1734; // 51 - 100
					double bac3 = 2014; // 101 - 200
					double bac4 = 2536; // 201 - 300
					double bac5 = 2834; // 301 - 400
					double bac6 = 2927; // > 401
						
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
					break;
			}
			
			case 5 :{
				printf("\n\t\tCHUONG TRINH KET THUC. \n");
				_getch();
				exit(0);
				break;	
			}
			
			default : printf("Khong xac dinh.\n"); break;
		}
		
		printf("\n\n\t\tBam ESC de thoat. \n\tHoac bat ki phim nao de chon lai.\n");
	}while(_getch() != 27);
	
	return 0;
}
