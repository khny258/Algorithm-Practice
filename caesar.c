#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

// from the ascii table, uppercase starts at index 65 in decimal notation 
#define UPPERCASE_LETTERS_START 65
// from the ascii table, lowercase starts at index 97 in decimal notation
#define LOWERCASE_LETTERS_START 97
// there are 26 letters in each
#define LETTERS_COUNT 26

int main(int argc, string args[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    
    // if k is > 26, store mod
    int k = atoi(args[1]) % LETTERS_COUNT;
    string plaintext = get_string("plaintext: ");
    
    printf("ciphertext: ");
    
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
            continue;
        }
        
        int ascii_offset = isupper(plaintext[i]) ? UPPERCASE_LETTERS_START : LOWERCASE_LETTERS_START;
        
        int pi = plaintext[i] - ascii_offset;
        int ci = (pi + k) % LETTERS_COUNT;
        
        printf("%c", ci + ascii_offset);
    }
    
    printf("\n");
    return 0;
}