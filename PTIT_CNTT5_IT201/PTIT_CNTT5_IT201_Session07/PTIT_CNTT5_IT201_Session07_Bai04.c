#include <stdio.h>
#include <string.h>

int sortCharacter(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    sortCharacter(str);
    printf("chuoi sau khi sap xep: ");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}