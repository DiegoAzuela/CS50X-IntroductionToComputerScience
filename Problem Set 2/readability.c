// Select libraries to include
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Declare function to use
int phrase_analyzer(string phrase);

int main(void)
{
    // Get input words from both players
    string phrase = get_string("Text: ");
    int phrase_score = phrase_analyzer(phrase);
}

// Function that would determine # of Letters (uppercase and lowercase), as well as spaces
int phrase_analyzer(string phrase)
{
    // Set up variables to keep score
    int letters = 0;
    int words = 1; //Initalized to 1 so it counts 4 spaces, 5 words
    int sentences = 0;
    // Iterate through all of the letters inside the word provided
    for (int i = 0, len = strlen(phrase); i < len; i++)
        //if (phrase[i] > 65 && phrase[i] < 90 || phrase[i] > 97 && phrase[i] < 122)
        if (isalpha(phrase[i]))
        {
            letters += 1;
        }
        else if (phrase[i] == ' ')
        {
            words += 1;
        }
        // else if (phrase[i] == 46 || phrase[i] == 33 || phrase[i] == 63)
        else if (phrase[i] == '.' || phrase[i] == '!' || phrase[i] == '?')
        {
            sentences += 1;
        }
    float L = ((float)letters / (float)words) * 100;
    float S = ((float)sentences / (float)words) * 100;

    int calculate_index = round(0.0588 * L - 0.296 * S - 15.8);

    if (calculate_index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (calculate_index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", calculate_index);
    }
    return calculate_index;
}
