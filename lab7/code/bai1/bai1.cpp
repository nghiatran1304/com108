#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void bai1(){
	// dem so luong nguyen am , phu am trong chuoi
		// khai bao
	char s[100];
	char s1[100]; // luu tam gia tri s
	int soNguyenAm = 0;
	int soPhuAm = 0;	
	
	int i = 0 ; // bien chay for
	
	printf("Nhap vao 1 chuoi : ");
	gets(s);
	
	strcpy(s1,s); // copy chuoi s vao s1
	
	// chuyen tat ca ki tu trong s thanh chu thuong 
	strlwr(s);
	
	// xu ly 
	while(s[i++] != NULL){
		if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o'){
			soNguyenAm++;
		}
		else if(s[i] == 32){
			continue;
		}
		else{
			soPhuAm++;
		}
		
	}
	
	printf("Chuoi s : %s\n",s1);
	printf("Co %d nguyen am.\n",soNguyenAm);
	printf("Co %d phu am.\n",soPhuAm);
	
}

void bai2(){

	// dang ky tai khoan
	
	char dkTaiKhoan[100];
	char dkMatKhau[100];
	
	unsigned short checkFlag = 1;
	
	do{
		system("cls");
		
		printf("\n----------------DANG KY----------------\n");
		printf("\nTai khoan : ");
		gets(dkTaiKhoan);
		
		printf("\nMat Khau : ");
		gets(dkMatKhau);
		
		char checkAgain;
		
		printf("Ban co chac khong (y/n) : ");
		scanf("%c",&checkAgain);
		
		fflush(stdin);
		
		if(checkAgain == 'y'){
			checkFlag = 0;
		}
		
		
	}while(checkFlag != 0);
	
	
	// dang nhap 
	char dnTaiKhoan[100];
	char dnMatKhau[100];
	
	system("cls");
	printf("\n----------------DANG NHAP----------------\n");
	printf("\nDang nhap tai khoan : ");
	gets(dnTaiKhoan);
	
	printf("Dang nhap mat khau : ");
	gets(dnMatKhau);
	
	
	unsigned short flagTK = 0;
	unsigned short flagMK = 0;
	
	for(int i = 0 ; i < strlen(dkTaiKhoan) ; i++){
		if(dkTaiKhoan[i] != dnTaiKhoan[i]){
			flagTK = 1;
		}
	}
	
	for(int i = 0 ; i < strlen(dkMatKhau) ; i++){
		if(dkMatKhau[i] != dnMatKhau[i]){
			flagTK = 1;
		}
	}
	
	if(flagTK == 0 && flagMK == 0){
		printf("Dang nhap thanh cong. \n");
	}
	else{
		printf("Dang nhap that bai. \n");
	}
}

void bai3(){
	// sap xep chuoi theo chu cai
	
	// input
	char sNhap[100];
	char sLuu[100];
	
	printf("Nhap S : ");
	gets(sNhap);
	 
	// process
	for(int i = 0 ; i < strlen(sNhap) ; i++){
		for(int j = i + 1 ; j < strle(sNhap) ; j++){
			if(sNhap[i] < sNhap[j]){
				// swap
				
			}
		}
	}
	
	
	// output
	printf("Chuoi sau khi sap xep : %s",S1);
}

int main(){

	printf("\n---------------------------------\n");
	
	
	_getch();
	return 0;
}














