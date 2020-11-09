#include <stdio.h>

int main()
{
    int dzielna = 1;

    while (dzielna <= 1000)
    {
        for (int i = 2; i <= dzielna ; i++)
            if (dzielna % i == 0)
            {
                if (dzielna == i)
                    printf("%d ", dzielna);
                else
                    break;
            }
        dzielna++;
    }

    return 0;
}