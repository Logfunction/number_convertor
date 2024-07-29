#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"

int main(){
    int choice, decimal;
    char input[32];

    while(1){
        printf("Choose an operation:\n");
        printf("1. Decimal to Binary\n");
        printf("2. Binary to Decimal\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("7. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Decimal number\n");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;
        
        case 2:
            printf("Enter Binary number\n");
            scanf("%s", input);
            binaryToDecimal(input);
            break;

        case 3:
            printf("Enter Decimal number\n");
            scanf("%d", &decimal);
            decimalToHexadecimal(decimal);
            break;

        case 4:
            printf("Enter Hexadecimal number\n");
            scanf("%s", input);
            hexadecimalToDecimal(input);
            break;

        case 5:
            printf("Enter Binary number\n");
            scanf("%s", input);
            binaryToHexadecimal(input);
            break;

        case 6:
            printf("Enter Hexadecimal number\n");
            scanf("%s", input);
            hexadecimalToBinary(input);
            break;

        case 7:
            exit(0);
        
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}