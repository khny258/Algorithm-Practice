#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /* prompt the user for height (integer) */
    int n;
    do
    {
        n = get_int("Height: ");
    }
    /* if the height is under 1 or over 8, the user must put in a correct integer */
    while (n > 8 || n < 1);
    
    /* use a for loop to iterate from 1 through height specified in input */
    for (int i = 0; i < n; i++)
    {
        /* prints the spaces before the hashes */
        for (int s = n - 1; s > i; s--)
        {
            printf(" ");
        }
        /* prints the hashes */
        for (int h = -1; h < i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}