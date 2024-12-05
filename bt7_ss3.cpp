#include <stdio.h>

int combination(int n, int k) {
    if (k == 0 || k == n) {
        return 1; // C(n, 0) = C(n, n) = 1
    }
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main() {
    int n, m;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    printf("Nhap vao so m: ");
    scanf("%d", &m);

    if (m > n || m < 0) {
        printf("Gia tri m phai nam trong khoang [0, n]\n");
    } else {
        int result = combination(n, m);
        printf("Ket qua la %d\n", result);
    }

    return 0;
}

