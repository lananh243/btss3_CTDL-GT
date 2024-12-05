#include<stdio.h>
int fibonacci(int n);
int main() {
	int n;
	printf("Nhap vao so n : ");
	scanf("%d", &n);
	//Kiem tra dieu kien
	if(n < 2){
		printf("N phai lon hon hoac bang 2");
		return 0;
	}
	
	printf("Day fibonacci la : ");
	for(int i; i < n; i++){
		printf("%d \t", fibonacci(i));
	}
	return 0;	
}

int fibonacci(int n){
	if(n == 0){
		return 0;
	}else if (n == 1){
		return 1;
	}else {
		return fibonacci(n -1) + fibonacci(n-2);	
	}
	
}

