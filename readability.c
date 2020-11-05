#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    /* variables */
    int letters = 0;
    int words = 1;
    int sentences = 0;

    /* prompt user for text */
    string input = get_string("Text: ");

    /* calculate length of string */
    int stringlength = strlen(input);

    /* for loop */
    for (int i = 0; i < stringlength; i++)
    {
        /* if lowercase a to z or uppercase A to Z */
        if ((input[i] >= 'a' && input [i] <= 'z') || (input[i] >= 'A' && input [i] <= 'Z'))

        {
            /* add to letters */
            letters++;
        }

        /* if space */
        if (input[i] == ' ')
        {
            /* add to words */
            words++;
        }

        /* if period, exclamation mark, or question mark */
        if (input[i] == '.' || input [i] == '!' || input[i] == '?')
        {
            /* add to sentences */
            sentences++;
        }
    }

    /* average number of letters per 100 words in the text */
    float L = (float) letters / (float) words * 100;

    /* average number of sentences per 100 words in the text */
    float S = (float) sentences / (float) words * 100;

    /* Coleman–Liau index */
    float index = 0.0588 * L - 0.296 * S - 15.8;

    /* round grade to nearest int */
    int grade = round(index);

    printf("Grade %i\n", grade);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }

    if (grade > 16)
    {
        printf("Grade 16+\n");
    }
}