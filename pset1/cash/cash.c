#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int counter = 0;


    {
        change = get_float("Change: ");
    }
    while (change <= 0.00);
    int changeCents = round(change*100);

    while (changeCents >= quarter && changeCents > 0)
    {
        //  printf("%i",changeCents);
        changeCents -= quarter;
        //  printf("%i",changeCents);
        counter++;
        // printf(" I used 1 quarter\n");
    };


    while (changeCents >= dime && changeCents < quarter && changeCents > 0)
    {
        //   printf("%i",changeCents);
        changeCents -= dime;
        //  printf("%i",changeCents);
        counter++;
        // printf(" I used 1 dime\n");
    }

    while (changeCents >= nickel && changeCents < dime && changeCents > 0)
    {
        //   printf("%i",changeCents);
        changeCents -= nickel;
        //  printf("%i",changeCents);
        counter++;
        // printf(" I used 1 nickels\n");
    }

    while (changeCents >= penny && changeCents < nickel && changeCents > 0)
    {
        //   printf("%i",changeCents);
        changeCents -= penny;
        //  printf("%i",changeCents);
        counter++;
        // printf(" I used 1 penny\n");
    }


    printf("%i\n",counter);
    //   printf("%i",changeCents);
}