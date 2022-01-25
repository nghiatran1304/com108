#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.14

int main(){
	
	printf("----------CACH 1----------\n");
		// 1 degree = PI / 180 rd		
	// doi do qua radian
	double rd1 = PI / 180;
	double rd30 = rd1 * 30; // doi 30 do => radian
	double rd60 = rd1 * 60; // doi 60 do => radian
	
	// xuat ket qua	
	printf("Sin goc 30 : %.2lf\n",sin(rd30));
	printf("Cos goc 60 : %.2lf\n",cos(rd60));
	printf("Tan PI / 4 : %.2lf\n",tan(PI / 4));
	printf("Can bac 2 cua 2 : %.2lf \n",sqrt(2));
	printf("23 mu 3 = %.2lf\n",pow(23,3));
	
	
	printf("\n----------CACH 2---------- \n");
	
	double x;
	int soMu;
	printf("Nhap x : ");
	scanf("%lf",&x);
		// 1 degree = PI / 180 rd		
	// doi do qua radian
	double rd = PI / 180;
	double rdX = rd * x; 
	
	// xuat ket qua	
	printf("Sin %.2lf : %.2lf\n",x,sin(rdX));
	printf("Cos %.2lf : %.2lf\n",x,cos(rdX));
	
	printf("Tan %.2lf : %.2lf\n",x,tan(rdX));
	
	printf("Can bac 2 cua %.2lf : %.2lf \n",x,sqrt(x));
	
	printf("Nhap so mu : "); scanf("%d",&soMu);
	printf("%.2lf mu %d = %.2lf\n",x,soMu,pow(x,soMu));
	
	_getch();
	return 0;
}
