 // KIEM TRA SO NGUYEN TO
#include <stdio.h>
#include <conio.h>

int main(){
	
	// input
	int n; // gia tri tu ban phim nhap vao
	int count , i ; // bien dem va bien chay
	
	printf("Nhap so : "); scanf("%d",&n);
	
	// process - output
		// so nguyen to nho nhat la 2
	if(n < 2 ){ 
		printf("%d khong phai so nguyen to.\n");
	}
			// neu n chia het cho bat kia i nao trong khoang [2 : n-1] thi n khong phai so nguyen to
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
	
	_getch();
	return 0;
}


