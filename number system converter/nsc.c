#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int num) {
    int binaryNum[32];
    int i = 0;
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

// Function to convert decimal to octal
void decToOctal(int num) {
    int octalNum[100];
    int i = 0;
    while (num != 0) {
        octalNum[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decToHexadecimal(int num) {
    char hexadecimalNum[100];
    int i = 0;
    while (num != 0) {
        int temp = 0;
        temp = num % 16;
        if (temp < 10) {
            hexadecimalNum[i] = temp + 48;
            i++;
        } else {
            hexadecimalNum[i] = temp + 55;
            i++;
        }
        num = num / 16;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimalNum[j]);
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decToBinary(num);
    decToOctal(num);
    decToHexadecimal(num);
    return 0;
}