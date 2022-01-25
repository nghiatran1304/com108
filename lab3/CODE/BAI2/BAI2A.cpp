 /* GIAI PHUONG TRINH BAC 1*/
 // pt1 : ax + b = 0
#include <stdio.h>
#include <conio.h>

int main(){
	
	double a , b , x; // khai bao 
	
	printf("\tGIAI PHUONG TRINH BAC 1 : ax + b = 0\n");
	printf("Nhap he so a : "); 
	scanf("%lf",&a);
	printf("Nhap he so b : "); 
	scanf("%lf",&b);
	
	if(a == 0){
		if(b == 0){
			printf("Phuong trinh vo so nghiem.\n");
		}
		else{
			printf("Phuong trinh vo nghiem.\n");
		}
	}
	else{
		// xu ly khi a != 0
		x = (-b/a);
		printf("Phuong trinh co nghiem x = -b/a = %.2lf",x);
	}
	
	_getch();
	return 0;
}
