#include<stdio.h>
int main()
{
    int x, c1, c2, c3;

    scanf("%d %d %d %d", &x, &c1, &c2, &c3);
    if(x+c1+c2+c3==0) {break;}

        printf("%d\n", 720 + 360 + ((x - c1 + 40) % 40 + (c2 - c1 + 40) % 40 + (c2 - c3 + 40) % 40) * 9);

return 0;
}



