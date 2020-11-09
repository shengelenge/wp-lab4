#include <stdio.h>

int main()
{
    unsigned int n;

    printf("Podaj liczbe naturalna n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Brak elementow w zbiorze.");
    else
    {
        if (n == 1 || n == 2)
            printf("Brak podzbiorow trojelementowych w zbiorze.");
        else
        {
            for (int i = 1; i <= n ; i++)
            {

            }
        }
    }


    return 0;
}