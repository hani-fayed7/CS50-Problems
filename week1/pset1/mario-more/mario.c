#include <cs50.h>
#include <stdio.h>

void printSquares(int space); //function prototype

int main(void)
{

    int height;
    do
    {
        //prompt the user to enter the height of the pyramide
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8); //check if height is between 1 and 8.

    int space = height - 1;

    //printing the pyramide
    for (int i = 1; i <= height; i++)
    {

        //printing spaces
        for (int k = space; k > 0; k--)
        {
            printf(" ");
        }

        printSquares(i);

        printf("  "); //leave space

        printSquares(i);

        printf("\n"); //jump to a new line
        space--; //decrementing the variable space
    }
}

void printSquares(int i)
{
    for (int j = 1; j <= i ; j++)
    {
        printf("#");
    }

}