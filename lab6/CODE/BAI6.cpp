#include <stdio.h>

const int MAX = 100000;
int a[MAX];

void nhapMang(int a[] , int &n){
	
	printf("Nhap gia tri cho tung phan tu.\n");
	
	for(int i = 0 ; i < n ; i++){
		printf("Mang a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
}

void xuatMang(int a[] , int n){
	printf("\nGIA TRI CAC PHAN TU\n");
	
	for(int i = 0 ; i < n ; i++){
		printf("Mang a[%d] : %d\n",i,a[i]);
	}
}

double bai1(int a[] , int n){
	// tinh trung binh tong cac so chia het cho 3 trong mang
	double tong = 0;
	int bienDem = 0;
	double trungBinh;
	
	for(int i = 0 ; i < n ; i++){
		if(a[i] % 3 == 0){
			tong += a[i];
			bienDem++;
		}		
	}
	
	trungBinh = tong / bienDem;
	
	return trungBinh;
	
}

void bai2(int a[] , int n){
	// tim MIN - tim MAX
	
	int MAX = a[0];
	int MIN = a[0];
	
	for(int i = 0 ; i < n ; i++){
		if(MAX < a[i]){
			MAX = a[i];
		}
		if(MIN > a[i]){
			MIN = a[i];
		}
	}
	
	printf("\nMAX = %d \n",MAX);
	printf("MIN = %d\n",MIN);
	
}

void bai3(int a[] , int n){
	// sap xep mang theo thu tu giam dan.
	
	for(int i = 0 ; i < n ; i++){
		int temp;
		for(int j = 0 ; j < n ; j++){
			if(a[i] > a[j]){
				// hoan vi
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nThu tu giam dan.");
	xuatMang(a,n);
	
}

void bai4(){
	// tinh binh phuong cac phan tu trong mang 2 chieu
	int n , m ;
	printf("Nhap so hang : ");
	scanf("%d",&n);
	printf("Nhap so cot : ");
	scanf("%d",&m);

	int mang[n][m];

	// nhap gia tri
	printf("\nNhap gia tri cho tung phan tu.\n");
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			printf("Gia tri a[%d][%d] : ",i,j);
			scanf("%d",&mang[i][j]);
		}
	}

	// xuat mang binh phuong
	int binhPhuong;
	printf("\nBINH PHUONG MA TRAN MANG 2 CHIEU.\n");
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			binhPhuong = mang[i][j] * mang[i][j];
			printf("a[%d][%d] : %d \t",i,j,binhPhuong);
		}
		printf("\n");
	}
}


int main(){
	
	int n;
	printf("Nhap so luong phan tu : ");
	scanf("%d",&n);
	
	nhapMang(a , n);
	xuatMang(a , n);
	
	double dTb = bai1(a , n);
	printf("\nTb cong cac so chia het cho 3 : %.2lf\n",dTb);
	
	bai2(a , n);
	bai3(a , n);
	printf("\n");
	bai4();
	return 0;
}
