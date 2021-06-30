#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int random;
    int count;
    int numbers;

    srand(time(NULL));
    for (count = 0, numbers = 2772; numbers > 122; count++)
    {
        random = (rand() % 125) + 1;
        printf("%c", random);
        numbers -= random;
    }
    printf("%c", numbers);

    return (0);
}
