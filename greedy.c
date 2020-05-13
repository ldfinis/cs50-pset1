include <stdio.h>
#include <cs50.h>
#include <math.h>



void PrintCoins(float);

int GetCoins(int);



int main(void)

{
float amount_owed;
    
    do
    {

     amount_owed = get_float("How much change is owed? \n");

    }

    while(amount_owed < 0);


    PrintCoins(amount_owed);


}



void PrintCoins(float amount_owed)

{

    int cents = (int) round(amount_owed * 100);

    printf("%d\n", GetCoins(cents));

}



int GetCoins(int cents)

{

    int coins = 0;

    if(cents >= 25)

    {

        coins += cents / 25;

        cents %= 25;

    }

    if(cents >= 10)

    {

        coins += cents / 10;

        cents %= 10;

    }

    if(cents >= 5)

    {

        coins += cents / 5;

        cents %= 5;

    }

    if(cents >= 1)

    {

        coins += cents;

    }

    return coins;

}
