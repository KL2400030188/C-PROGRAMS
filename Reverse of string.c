#include<stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    printf("\nEnter a string: ");
    scanf("%[^\n]s", str);
      while (str[length] != '\0') {
        length++;
    }
    printf("The reversed string is: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
