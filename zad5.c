#include <stdio.h>

int main()
{
   int n, k = 0;

   printf("Podaj liczbe naturalna n: ");
   scanf("%d", &n);

    for (int i = 1; i <= n ; ++i, k = 0)
    {
        for (int j = 1; j <= n - i ; ++j)
            printf("  ");
        while (k != 2*i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    return 0;
}