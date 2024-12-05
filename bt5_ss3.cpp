#include <stdio.h>
#include <string.h>

// Ham kiem tra xem chuoi co doi xung hay ko
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];

    // Nhap chuoi 
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    // Kiem tra doi xung hay ko
    if (isPalindrome(str)) {
        printf("Palindrome valid.\n");
    } else {
        printf("Palindrome invalid.\n");
    }

    return 0;
}

