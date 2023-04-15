#include<stdio.h>
int main()
{
    int x, c1, c2, c3;

    scanf("%d %d %d %d", &x, &c1, &c2, &c3);

    while (x || c1 || c2 || c3)
    {
        printf("%d\n", 1080 + ((x - c1 + 40) % 40 + (c2 - c1 + 40) % 40 + (c2 - c3 + 40) % 40) * 9);

        scanf("%d %d %d %d", &x, &c1, &c2, &c3);
    }
}
