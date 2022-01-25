 /* CHUONG TRINH TINH PHUONG TRINH BAC 2*/
 // ptb2 : ax^2 + bx + c = 0
 
#include <stdio.h>
#include <conio.h>
#include <math.h> // sqrt();

int main(){
	
	printf("\t\nPhuong trinh bac 2 co dang : ax^2 + bx + c = 0 \n"); // INTRO 
	
	// input 
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

	_getch();
	return 0;
}
