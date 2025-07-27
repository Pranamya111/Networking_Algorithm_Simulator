#include <stdio.h>

void ceaser_cipher() 
{
    int i, x;
    char str[100];

    printf("Please enter a string:\t");
    scanf("%s", str);

    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    scanf("%d", &x);

    // using switch-case statements
    switch(x) {
        // case 1: Encrypt the string
        case 1:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] + 2; // Encryption key = 2
            printf("\nEncrypted string: %s\n", str);
            break;

        // case 2: Decrypt the string
        case 2:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] - 2; // Decryption key = 2
            printf("\nDecrypted string: %s\n", str);
            break;

        default:
            printf("\nInvalid Input !!!\n");
    }

}



