#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int cents_owed;
    /* prompt user for an amount of change */
    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
        
    } 
    while (cents_owed <= 0);
    
    /* use the largest coins possible, keep track of coins used */
    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;
    
    /* print the number of coins */
    printf("%d\n", quarters + dimes + nickels + pennies);
}