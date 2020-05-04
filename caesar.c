// Sources
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Functions
bool check_valid_key(string s);

// Main code
int main(int argc, string argv[])
{
    if (argc != 2 || !check_valid_key(argv[1]))
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    int key = atoi(argv[1]); // "13"-> 13

    string plaintext = get_string("plaintext: ");
// Ciphering the cipher
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            char m = 'A';
            if (islower(c))
            {
                m = 'a';
            }
            printf("%c", (c - m + key) % 26 + m);
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}

//Check the key
bool check_valid_key(string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
        if (!isdigit(s[i]))
        {
            return false;
        }
    return true;
}