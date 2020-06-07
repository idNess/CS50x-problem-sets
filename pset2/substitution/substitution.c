#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

// VCHPRZGJNTLSKFBDQWAXEUYMOI

int main(int argc, string argv[])
{

    /************
CHECK
************/

    // 1. p checks if there's only one argument

    while (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    };

    // 2. p checks if lenght equals 26

    string key = argv[1];
    int keyLenght = strlen(key);

    while (keyLenght != 26)
    {
        printf("Your key must contain 26 characters\n");
        return 1;
    };

    // 3. p loops and checks if there are any numbers or other characters

    for (int i = 0; i < keyLenght; i++)
    {
        if (key[i] < 65 || (key[i] >= 91 && key[i] < 97) || key[i] >= 123)
        {
            printf("Your key must only contain valid characters (only alphabet)\n");
            return 1;
        }

        // 4. puts every character to lowercase

        else if (key[i] >= 65 && key[i] < 91)
        {
            key[i] += 32;
        }
    }

    // 5. checks for any repeated charachter

    for (int j = 0; j < keyLenght; j++)
    {
        for (int k = j + 1; k < keyLenght; k++)
        {

            if (key[j] == key[k])
            {
                printf("Your key must not contain repeated characters\n");
                return 1;
            }
        }
    }

    /************
PROMPT
************/

    // 6. p gets prompt

    string plainText = get_string("Plaintext: ");

    int ptLenght = strlen(plainText);

    /************
PRINT
************/
    printf("ciphertext: ");

    for (int l = 0; l < ptLenght; l++)
    {

        // 7. p encrypts lowercase into lowercase

        if ((plainText[l] >= 97 && plainText[l] <= 122))
        {
            printf("%c", key[plainText[l] - 97]);
        }

        // 8. p encrypts upercase into uppercase

        else if (plainText[l] >= 65 && plainText[l] <= 90)
        {
            printf("%c", (key[plainText[l] - 65]) - 32);
        }

        // 9. p leaves other characters untouched

        else
        {

            printf("%c", plainText[l]);
        }
    }

    printf("\n");
}
