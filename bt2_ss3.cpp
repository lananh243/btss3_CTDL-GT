#include<stdio.h>

int sum(int n,int m);
int main() {
	//	Tinh tong cua day so
	int n,m;
	printf("Nhap vao so n : ");
	scanf("%d",&n);
	printf("Nhap vao so m : ");
	scanf("%d",&m);
	
	//Kiem tra dieu kien
	if(n > m){
		printf("N phai nho hon M");
		return 0;
	}
	int result = sum(n,m);
	printf("Ket qua la %d",result);
	return 0;	
}


int sum(int n,int m){
	if(n > m){
		return 0;
	} 
	return n + sum(n + 1, m);
}
