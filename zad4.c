#include <stdio.h>

int main()
{
    int a = 999, b, c, d, temp;

    while (a >= 210)
    {
        temp = a;
        b = temp % 10;
        temp /= 10;
        c = temp % 10;
        temp /= 10;
        d = temp % 10;

        if (b < c && c < d)
            printf("%d ", a);

        a -= 1;
    }

    return 0;
}