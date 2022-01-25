  /* NHAP - XUAT TEN VA NAM SINH */
  
#include <stdio.h>
#include <conio.h>

int main(){
	
	// khai bao 2 bien luu nam sinh va tuoi
	int namSinh , tuoi;
	
	// khai bao mang ky tu luu ten gom toi da 10 phan tu, moi phan tu co kieu du lieu la ky tu
	char ten[10];
	
	// nhap ten - nam sinh
	printf("Nhap ten : "); 
	scanf("%s",ten);
	
	printf("Nhap nam sinh : "); 
	scanf("%d",&namSinh);
	
	
	// xu ly tinh tuoi
	tuoi = 2020 - namSinh;
	
	// xuat ket qua 
	printf("Ban %s %d tuoi.",ten,tuoi);

	_getch();
	return 0;
}
