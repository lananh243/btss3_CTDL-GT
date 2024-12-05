#include<stdio.h>

int total(int arr[], int n){
	if(n == 0){
		return 0;
	}
	return arr[n-1] + total(arr, n-1);
}
int main() {
	int n;
	
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Nhap cac phan tu cua mang : \n");
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		
	}
	
	printf("Mang sau khi nhap la:\n");
    //hien thi mang ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
    int result = total(arr,n);
	printf("Ket qua la %d",result);
	return 0;
}

