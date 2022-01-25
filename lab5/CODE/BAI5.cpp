#include <stdio.h>
#include <conio.h>

// tim max trong 3 so
int fMax(int a , int b, int c){
	int MAX = a;
	
	if(MAX < b){
		MAX = b;
	}
	if(MAX < c){
		MAX = c;
	}
	
	return MAX;
}

void leapYear(){
	int _year;	
	printf("Nhap vao nam : "); scanf("%d",&_year);
	
	if(_year % 4 == 0 && _year % 100 != 0 || _year % 400 == 0){
		printf("%d la nam nhuan.\n",_year);
	}else{
		printf("%d khong la nam nhuan.\n",_year);
	}
}

void hoanVi(int *a , int *b){
	
	int temp = *a ;
	*a = *b;
	*b = temp;	
	
	/*
	a += b;
	b = a - b;
	a -= b;
	*/
}

int main(){
	
	int a ,b;
	printf("Nhap a , b : "); scanf("%d%d",&a,&b);
	
	printf("a = %d \tb = %d\n",a,b);
	printf("Sau khi hoan vi.\n");
	hoanVi(&a,&b);
	printf("a = %d \tb = %d\n",a,b);
	
	_getch();
	return 0;
}
