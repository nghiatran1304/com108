#include <stdio.h>
#include <conio.h>

	// tinh trung binh tong cac so tu nhien chia het cho 2

int main(){
		
	int min , max, bienDem = 0;
	float tong = 0  , trungBinh;
	
	printf("Nhap min : "); scanf("%d",&min);
	printf("Nhap max : "); scanf("%d",&max);
	
	/*
	for(int i = min ; i <= max ; i++){
		if(i % 2 == 0){
			tong += i;
			bienDem++;
		}
	}
	*/
	
	int i = min;// bien chay
	while( i <= max){
		if(i % 2 == 0){
			tong += i;
			bienDem++;
		}
		i++;
	}
	trungBinh = tong/bienDem;
	 
	printf("Trung binh cong cac so tu nhien chia het cho 2 : %.2f",trungBinh);
	
	_getch();
	return 0;
}
