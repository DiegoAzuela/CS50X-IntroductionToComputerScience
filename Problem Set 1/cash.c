#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes (cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // Need to declare the variable before using it
    int cents;
    do
    {
        // The user will input a variable
        cents = get_int("Please input the number of cents available: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarter_value, quarter_quotient;
    quarter_value = 25;
    quarter_quotient = cents / quarter_value;
    return quarter_quotient;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes_value, dimes_quotient;
    dimes_value = 10;
    dimes_quotient = cents / dimes_value;
    return dimes_quotient;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels_value, nickels_quotient;
    nickels_value = 5;
    nickels_quotient = cents / nickels_value;
    return nickels_quotient;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies_value, pennies_quotient;
    pennies_value = 1;
    pennies_quotient = cents / pennies_value;
    return pennies_quotient;
}