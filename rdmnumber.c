#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rdm(int level, int mx);

int main(int argc, char *argv[])
{

    int level = 0;

    printf("Choose a level \nLevel 1 : 0 - 50 \nLevel 2 : 0 - 100 \nLevel 3 : 0 - 250 \nLevel 4 : 0 - 500 \nLevel 5 : 0 - 1000 \nChoice : ");
    scanf("%d", &level);


    switch (level)
    {
        case 1: rdm(level, 50);
        break;
        case 2: rdm(level, 100);
        break;
        case 3: rdm(level, 250);
        break;
        case 4: rdm(level, 500);
        break;
        case 5: rdm(level, 1000);
        break;
        default: printf("invalid choice :P\n");
    }


    return 0;
}


void rdm(int level, int mx)
{
    int mystNumbr = 0;
    int usrGuess = 0;
    int try = 1;


    srand(time(NULL));
    mystNumbr = rand() % (mx + 1);

    do
    {
        printf("\nCurrent level : %d \nTry : %d \nGuess the number : ", level, try);
        scanf("%d", &usrGuess);

         if (usrGuess < mystNumbr) 
        {
            printf("Its higher OwO\n");
        }
        
        else if (usrGuess > mystNumbr) 
        {
            printf("Its lower TwT\n");
        }
         else 
        {
            printf("Thats the good number gg wp UwU\n");
        }

        try++;

    } while (usrGuess != mystNumbr);

    printf("You have found the number in %d try gg >w< \n\n", try - 1);

}

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣿⣿⡆⠀⠀⢸⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⣾⣿⡆⠀
⠀⠀⠀⣿⣿⡇⠀⠀⢸⣿⢰⣿⡆⠀⣾⣿⡆⠀⣾⣷ ⣿⣿⡇⠀⠀⣿⣿⡇⠀
⠀⠀⠀⣿⣿⡇⠀⠀⢸⣿⠘⣿⣿⣤⣿⣿⣿⣤⣿⡇⢻⣿⡇⠀⠀⣿⣿⡇⠀
⠀⠀⠀⣿⣿⡇⠀⠀⢸⡿⠀⢹⣿⣿⣿⣿⣿⣿⣿⠁⢸⣿⣇⠀⢀⣿⣿⠇⠀
⠀⠀⠀⠙⢿⣷⣶⣶⡿⠁⠀⠈⣿⣿⠟⠀⣿⣿⠇⠀⠈⠻⣿⣶⣾⡿⠋⠀⠀
*/