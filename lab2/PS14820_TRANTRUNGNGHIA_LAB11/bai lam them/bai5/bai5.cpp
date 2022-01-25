#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	// khai bao
	double x , sinBinh , cosBinh , tong;
	// nhap x
	printf("Nhap x : ");
	scanf("%lf",&x);
	
	// xu ly
	sinBinh = pow(sin(x),2);
	cosBinh = pow(cos(x),2);
	tong = sinBinh + cosBinh; 
	
	// xuat du nhieu lieu

	printf("\nSin%c(%.2lf): %.2lf. \n",253,x,sinBinh);
	printf("Cos%c(%.2lf): %.2lf. \n",253,x,cosBinh);
	printf("sin%c(%.2lf) + cos%c(%.2lf).\n",253,x,253,x);
	printf("<=> %.2lf + %.2lf = %.2lf.\n",sinBinh , cosBinh,tong);
	printf("=> Tong = %.0lf. \n",tong);
	printf("Vay sin%c(%.2lf) + cos%c(%.2lf) = %.0lf.\n",253,x,253,x,tong);
	
	
	_getch();
	return 0;
}
