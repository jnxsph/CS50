#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

// Getting of "How much change is owed"
{
    float n;
    do
    {
        n = get_float("How much change is owed: ");
    }
    while (n <= 0);

    // Convert dollar amount inputed to cents e.g. $1.45 -> 145c
    // Round cents using [round ()]
    int Coins = round(n * 100);

    // Create a counter equal to 0, compute after every coin used
    int count = 0;

    // Declare a list for all denominations
    int deno[] = {25, 10, 5, 1};
    int size = sizeof(deno) / sizeof(int);

    // Write a for loop looping through all denominations as long as i is less than the number of denominations (in this case, 4)
    for (int i = 0; i < size; i++)
    {
        //The loop will divide the total by 25, 10, 5, etc.
        count += Coins / deno [i];

        //After 'counting' how many denominations are needed, apply absolute value to the total to get remaining total
        Coins %= deno[i];
    }

    //Move to the next line
    printf("%i\n", count);
}
