#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
// Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

// Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

// TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
    printf("\n");
}

int compute_score(string word)
{
// TODO: Compute and return score for string
    int sum = 0;

// Determine points of each letter by uppercasing every letter to create a scoring standard
    for (int i = 0, l = strlen(word); i < l; i++)
    {
        char aa = toupper(word[i]);
        char a = 'A';
    
        // Determine decimal equivalent with respect to first letter
        while (a != aa && a < 91)
        {
            a++;
        }
        if (aa == a)
        {
            sum = sum + POINTS[a - 'A'];
        }
        else
        {
            sum = sum + 0;
        }
    }
    return sum;
}
