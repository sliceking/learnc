#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNum = rand() % 21;
    int guess = -1;

    while (guess != randomNum)
    {
        printf("guess a number\n");
        scanf("%d", &guess);

        if (guess == randomNum)
        {
            printf("\nyou win\n");
            break;
        }

        if (guess < randomNum)
        {
            printf("\nits higher\n");
        }
        
        if (guess > randomNum)
        {
            printf("\nits lower\n");
        }
    }

    return 0;
}