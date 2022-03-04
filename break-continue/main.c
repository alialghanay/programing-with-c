#include <stdio.h>

int main()
{
    int number, i;
    char answer;
    i = 0;
    printf("You are supposed to input ");
    printf("positive integer numbers\n ");
    printf("input a non-positive number to exit\n");
    while (i < 2)
    {
        printf("Enter a positive integer number:");
        scanf("%d", &number);
        if(number <= 0)
        {
            break;
        }
        printf("Yes, %d is positive integer number\n", number);
        printf("let us try one more time -> y or n?\t");
        scanf(" %c", &answer);
        if(answer == 'y'){
            continue;
        }else if(answer == 'n')
        {
            break;
        }else i++;
    }
    printf("Sorry, something is wrong\n");
    printf("Bye.. :(");
    return 0;
}
