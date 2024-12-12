#include <stdio.h>

int main() {
    char str[] = "Xin chao, Vietnam!";
    char chuoi;
    int count = 0;
    printf("Nhap vao mot ki tu bat ki: ");
    scanf(" %c", &chuoi);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == chuoi) {
            count++;
        }
    }
    printf("Ki tu '%c' xuat hien %d lan.\n", chuoi, count);
    return 0;
}
