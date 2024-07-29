#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"

void decimalToBinary(int decimal) {
    int index = 0;
    char binary[32];

    if (decimal == 0) {
        binary[index] = '0';
    } else {
        while (decimal > 0) {
            binary[index] = (decimal % 2) + '0';
            index++;
            decimal /= 2;
        }
    }
    binary[index] = '\0';

    for (int i = 0; i < index / 2; ++i) {
        char temp = binary[i];
        binary[i] = binary[index - i - 1];
        binary[index - i - 1] = temp;
    }

    printf("Binary: %s\n", binary);
    printf("\n");
}

int binaryToDecimal(char* binary){
    int decimal = strtol(binary, NULL, 2);
    printf("Decimal: %d\n", decimal);
    printf("\n");
    return strtol(binary, NULL, 2);
}

void decimalToHexadecimal(int decimal){
    char hex[32];
    sprintf(hex, "%X", decimal);
    printf("Hexadecimal: %s\n", hex);
    printf("\n");
}

int hexadecimalToDecimal(char* hex){
    int decimal = strtol(hex, NULL, 16);
    printf("Decimal: %d\n", decimal);
    printf("\n");
    return strtol(hex, NULL, 16);
}

void binaryToHexadecimal(char* binary){
    int decimal = binaryToDecimal(binary);
    char hex[32];
    sprintf(hex, "%X", decimal);
    printf("Hexadecimal: %s\n", hex);
    printf("\n");
}

void hexadecimalToBinary(char* hex){
    int decimal = hexadecimalToDecimal(hex);
    char binary[32];
    decimalToBinary(decimal);
    printf("Binary: %s\n", binary);
    printf("\n");
}