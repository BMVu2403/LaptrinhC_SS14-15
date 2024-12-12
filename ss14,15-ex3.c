#include <stdio.h>

int main() {
    char str[] = "Xin chao, Vietnam!";
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
