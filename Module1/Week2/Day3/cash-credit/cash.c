#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
        int coins = round(dollars * 100);
        int change = 0;
        if (coins >= 25)
        {
            change += coins / 25;
            coins = coins % 25;
        }
        if (coins >= 10)
        {
            change += coins / 10;
            coins = coins % 10;
        }
        if (coins >= 5)
        {
            change += coins / 5;
            coins = coins % 5;
        }
        change += coins;
        printf("%i\n", change);
    } while (true);
}