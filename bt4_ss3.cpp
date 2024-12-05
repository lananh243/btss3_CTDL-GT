#include<stdio.h>
#include<string.h> 

int reverseString(char str[], int start, int end){
	if(start >= end){
		return 1;
	}
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	return reverseString(str, start + 1, end - 1);
}
int main() {
	char str[100];
	
	printf("Nhap vao chuoi : ");
	fgets(str, sizeof(str), stdin);//de nhap chuoi co khoang trang
	 
	//Loai bo ki tu xuong dong
	str[strcspn(str, "\n")] = '\0';
	
	reverseString(str, 0, strlen(str) - 1);
	
	printf("Chuoi sau khi dao nguoc : %s\n", str);
	return 0;
	
}

