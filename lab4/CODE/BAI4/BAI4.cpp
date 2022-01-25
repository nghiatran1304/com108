 							// MENU BAI 4
 
 
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int nhapSo()
{
	int x;
	printf("Nhap so : "); scanf("%d",&x);
	return x;
}

int main(){
	
//	do{
		bool isCheck = true;
	
		do{
			system("cls");
			
			printf("\t\t++-------------Menu--------------++\n");
			printf("\t\t1. Tb tong cac so chia het cho 2 \n");
			printf("\t\t2. Kiem tra so nguyen to \t  \n");
			printf("\t\t3. Kiem tra so chinh phuong \n");	
			printf("\t\t4. Thoat ! \n");
			printf("\t\t++-------------------------------++\n");
			
			short int luaChon;
			printf("Nhap lua chon : "); scanf("%hd",&luaChon);
			
			switch(luaChon){
				case 1 : {
						int min = nhapSo();
						int max = nhapSo();
						
						float tong = 0 , bienDem = 0 , trungBinh;
						int i = min;
						while( i <= max){
							if(i % 2 == 0){
								tong += i;
								bienDem++;
							}
							i++;
						}
						
						trungBinh = tong/bienDem;
						
						printf("Trung binh cac so chia het cho 2 : %.2f",trungBinh);
						
					break;
				}
				
				case 2 : {
						int n = nhapSo();
						int count , i ; // bien dem va bien chay
						// process - output
							// so nguyen to nho nhat la 2
						if(n < 2 ){ 
							printf("%d khong phai so nguyen to.\n");
						}
								/* neu n chia het cho bat kia i nao trong khoang [2 : n-1]
								 thi n khong phai so nguyen to */
						else{
							for(i = 2 ; i < n ; i++){ 
								if(n % i == 0){
									count++;
								}	
							}
							
							// ket thuc vong lap kiem tra so lan tang cua bien count
							// neu count = 0 => khong tang => so nguyen to
							// nguoc lai khong phai la so nguyen to
							if(count == 0){ 
								printf("%d la so nguyen to.\n",n);
							}
							else{
								printf("%d khong phai la so nguyen to.\n",n);
							}	
						}
					break;
				}
				
				case 3 : {
						int count = 0;
						int x = nhapSo();
						for(int i =  1; i < x ; i++){
							if( (i*i) == x){
								count++;
								break;
							}
						}
						
						// neu bien count tang len 1 => i*i = x co xay ra => x la so chinh phuong
						// nguoc lai n khong phai la so chinh phuong.
						if(count == 1){
							printf("%d la so chinh phuong.\n",x);
						}
						else{
							printf("%d khong phai la so chinh phuong.\n",x);
						}
						
					break;
				}
				case 4 : exit(0); 
					break;
				
				default : {
					printf("Khong xac dinh!");
					break;
				}
			}
			
			if(luaChon > 3 || luaChon < 1){
				isCheck = true;
			}else{
				isCheck = false;
			}
			
		}while(isCheck == true);
		
//		printf("\n\t\tBam ESC de thoat. \n\tHoac bat ki phim nao de bat dau lai.\n");
		
//	}while(_getch() != 27);
	
	_getch();
	return 0;
}
