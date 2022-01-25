#include <stdio.h>
#include <conio.h>

int main(){
	
	// bai 1 xuat ho ten
	printf("----------CACH 1----------\n");

	printf("Ho ten : Tran Trung Nghia \n");
	printf("MSSV : PS14820");
	
	printf("\n\n----------CACH 2----------\n");
	char hoTen[50];
	int mssv;
	
	printf("Nhap ho ten : ");
	gets(hoTen);
	printf("Nhap ma so sinh vien (chi so) : ");
	scanf("%d",&mssv);
	
	printf("\nKet qua \n");
	printf(" \nHo ten : %s \n",hoTen);
	printf("MSSV : PS%d \n",mssv);
	
	
	_getch();
	return 0;
}

