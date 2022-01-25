 // CHUONG TRINH KIEM TRA SO CHINH PHUONG
#include <stdio.h>
#include <conio.h>

int main(){
	
	// input
	int x; // x la so can kiem tra
	int count = 0;
	printf("Nhap vao so : "); scanf("%d",&x);
	
	// process
			// cach 1 - khong dung bien dem
	/*
	for(int i =  1; i < x ; i++){
		if( (i*i) == x){
			printf("%d la so chinh phuong.\n",x);
			break;
		}
	}
	*/
	
			// cach 2 - dung bien dem
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
	
	_getch();
	return 0;
}
