#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int point1, point2, point3, point01, point02, point03;
    int result;
    char name[20];
    char answer;
    char reply[225];

    printf("Welcome to C Quiz App!!\n");
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Welcome %s, Do you want to start the quiz-(y/n): ", name);
    scanf(" %c", &answer);

    if (answer == 'y')
    {
        printf("The Game has Started! \n ");
        printf("****************************** \n");
    }
    else if (answer == 'n')
    {
        printf("The Game has ended! \n");
    }
    else
    {
        printf("Invalid Command! \n");
    }

    if (answer == 'y')
    {
        printf("1. What type of language is C: \n\n");
        printf("a.) Machine Language \n");
        printf("b.) High Level Language \n");
        printf("c.) Low Level Language \n");
        printf("d.) Middle Level Language \n");

        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd')
        {
            printf("Correct! \n");
            point1 = 5;
            result = point1;
            printf("You scored %d points \n", result);
            printf("****************************** \n");
        }
        else
        {
            printf("Wrong Answer! \n");
            point1 = 0;
            result = point1;
            printf("You scored %d points \n", result);
            printf("****************************** \n");
        }

        printf("2. Which of the following command is used to print something on the screen in C: \n\n");
        printf("a.) scanf \n");
        printf("b.) strlen \n");
        printf("c.) print \n");
        printf("d.) fgets \n");

        printf("Enter your answer: ");
        scanf(" %c", &answer);

        if (answer == 'c')
        {
            printf("Correct! \n");
            point2 = 5;
            result = point1 + point2;
            printf("You have scored %d points \n", result);
            printf("****************************** \n");
        }
        else
        {
            printf("Wrong answer! \n");
            point2 = 0;
            result = point1 + point2;
            printf("You have scored %d points \n", result);
            printf("****************************** \n");
        }

        printf("3. Which of these is not a data-type: \n\n");
        printf("a.) Integer \n");
        printf("b.) constant \n");
        printf("c.) Double \n");
        printf("d.) Float \n");

        printf("Enter your answer: ");
        scanf(" %c", &answer);

        if (answer == 'b')
        {
            printf("Correct! \n");
            point3 = 5;
            result = point1 + point2 + point3;
            printf("You have scored %d points \n", result);
            printf("****************************** \n");
        }
        else
        {
            printf("Wrong Answer! \n");
            point3 = 0;
            result = point1 + point2 + point3;
            printf("You have scored %d points \n", result);
            printf("****************************** \n");
        }

    }

    return 0;
}

// Tell user to input name
// Welcome user to the game
// Ask user to continue or exit
// If user continues, proceed with quiz questions
// If user exits, end quiz
// Prompt user to answer questions
// If user answer is correct, display you got the correct answer and skip to the next question