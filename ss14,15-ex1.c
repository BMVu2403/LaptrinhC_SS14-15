#include <stdio.h>

int main() {
    char str[100]; 
    int length = 0; 
    printf("Nhap vao mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin); 
    while (str[length] != '\0') {
        length++;
    }
    printf("Chuoi vua nhap: %s", str);
    printf("Do dai chuoi: %d\n", length - 1); 
    return 0;
}
