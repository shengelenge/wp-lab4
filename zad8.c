#include <stdio.h>
typedef enum { false, true } bool;

bool czy_pierwsza(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i*i <= n ; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int m;

    while (m != 4)
    {
        printf("Co chcesz zrobic:\n");
        printf("1 - sprawdzic czy liczba jest pierwsza\n");
        printf("2 - sprawdzic czy liczba jest suma dwoch kwadratow\n");
        printf("3 - policzyc sume cyfr liczby\n");
        printf("4 - zakonczyc dzialanie programu\n");

        scanf("%d", &m);

        if (m == 1)
        {
            unsigned int n;

            printf("Podaj liczbe naturlana: ");
            scanf("%d", &n);

            if (czy_pierwsza(n))
                printf("Liczba %u jest pierwsza.\n", n);
            else
                printf("Liczba %u nie jest pierwsza.\n", n);
        }

        if (m == 2)
        {
            int n;

            printf("Podaj liczbe naturalna: ");
            scanf("%d", &n);

            for (int i = 1; i <= n ; i++)
            {
                for (int j = 1; j <= n ; j++)
                    if ((i*i + j*j) == n)
                        printf("Tak, sa to kwadraty liczb: %d i %d\n", i, j);
            }
        }

        if (m == 3)
        {
            unsigned int n, wynik;

            printf("Podaj liczbe naturalna: ");
            scanf("%d", &n);

            wynik = 0;

            while (n != 0)
            {
                wynik = wynik + (n % 10);
                n = n / 10;
            }

            printf("wynik = %d\n", wynik);
        }
    }

    return 0;
}