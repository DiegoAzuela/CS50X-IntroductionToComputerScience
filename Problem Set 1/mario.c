#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Need to declare the variable before using it
    int height;
    do
    {
        // The user will input a variable
        height = get_int("Please input a height value between 1 and 8: ");
    }
    while (height < 1 || height > 8); //Set a range for the input
    for (int i = 0; i < height; i++) //Iteration rows
    {
        for (int j = 0; j < height; j++) //Iteration columns
        {
            if (i + j < height - 1) //Logic to create pyramid
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}