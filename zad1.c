#include <stdio.h>

int main()
{
    unsigned int n, m;

    printf("Podaj dwie liczby naturalne n i m:\n");
    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);

    if (n == 0 || m == 0)
        printf("0 nie jest liczba naturalna.");
    else {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m ; j++)
            {
                int iloczyn = i*j;
                printf("%d ", iloczyn);
            }
            printf("\n");

        }
    }

    return 0;
}