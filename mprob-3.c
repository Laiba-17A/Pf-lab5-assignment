#include <stdio.h>

int main() {
    char character, encryptedChar, decryptedChar;
    int key = 4;

    printf("Please enter a character to encrypt: ");
    scanf(" %c", &character);

    encryptedChar = character ^ key;
    printf("Encrypted character: %c\n", encryptedChar);

    decryptedChar = encryptedChar ^ key;
    printf("Decrypted character: %c\n", decryptedChar);

    return 0;
}