#include <stdio.h>

int main()
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

    return 0;
}