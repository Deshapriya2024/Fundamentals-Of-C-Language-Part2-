#include <stdio.h>
#include <stdlib.h>     //Google Search
#include <time.h>       //Google Search
int random(int n);
int main()
{
    int usin,round = 1, coin, userscore = 0, comscore = 0;
    printf("\tSTONE PAPER SCISSOR\n_______________________________________\n");
    printf("Rules & Conditions :\n1.There will be 3 rounds between the player and\n  the computer , to get the winner.");
    printf("\n:-For playing your move you need to follow\nPress '1' for STONE\nPress '2' for PAPER\nPress '3' for SCISSOR\n");
    printf("\n \n \t\t ...GAME STARTS NOW...\n\n");
	while (round <= 3)
    {
        coin = random(3);
        printf("\n_________________________\n         Round-%d\n_________________________\n", round);
// Users turn
        printf("Player's turn :- ");
        scanf("%d", &usin);
        getchar();
        if (usin == 1)
        {
            printf("Your choice is 'STONE'.\n");
        }
        else if (usin == 2)
        {
            printf("Your choice is 'PAPER'.\n");
        }
        else if (usin == 3)
        {
            printf("Your choice is 'SCISSOR'.\n");
        }
// Computers Turn
        printf("Computers turn :- %d\n", coin);
        if (coin == 0)
        {
            printf("Your choice is 'STONE'.\n");
        }
        else if (coin == 1)
        {
            printf("Your choice is 'PAPER'.\n");
        }
        else if (coin == 2)
        {
            printf("Your choice is 'SCISSOR'.\n");
        }
// Score Manager
        if (usin == 1 && coin == 2 || usin == 2 && coin == 0 || usin == 3 && coin == 1)
        {
            userscore++;
            printf("\nPlayer has won the Round-%d.\n", round);
        }
        else if (usin == 3 && coin == 0 || usin == 2 && coin == 2 || usin == 1 && coin == 1)
        {
            comscore++;
            printf("\nComputer has won the Round-%d.\n", round);
        }
        else
        {
        	printf("\nThe Round-%d has Tied\n", round);
		}
        printf("\n\tScore = Player - %d : Computer - %d\n",userscore,comscore);
        round++;
    }
// Winner of the Game
	printf("\n----------RESULT----------\n");
    if (userscore > comscore)
    {
        printf("\nPlayer has won the Game.\n");
    }
    else if (comscore > userscore)
    {
        printf("\nComputer has won the Game.\n");
    }
    else
    {
        printf("\nThe Game has Tied\n");
    }

    return 0;
}
// Random number generator from Google
int random(int n)		
{
    srand(time(NULL));
    return rand() % n;
}
