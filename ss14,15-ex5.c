#include <stdio.h>

int main() {
    char str[] = "Xin chao, Vietnam!";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
            count++;
        }
    }
    printf("So tu trong chuoi: %d\n", count);
    return 0;
}
