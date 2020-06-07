#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int words = 1;
int letters = 0;
int sentences = 0;

int main(void)
{

    string text = get_string("Text: ");
    int lenght = strlen(text);

    for (int i = 0; i < lenght; i++)
    {
        if (text[i] == 32)
        {
            words++;
        }
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            letters++;
        }
        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentences++;
        }
    }

    float L = letters * 100.00 / words;
    float S = sentences * 100.00 / words;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index < 16)
    {
        printf("Grade %i\n", index);
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
}