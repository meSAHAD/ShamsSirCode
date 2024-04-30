#include <stdio.h>
int f(int x)
{
int a = x/3;
int b = x % 3;
if (b != 0)
return a*2 + b-1;
else
return a*2;
}
int main()

{
int T;
int k=0;
int l,r;
scanf("%d", &T);
while (T--)
{
scanf("%d %d", &l,&r);
printf ("Case %d: ",++k);
printf ("%d\n", f(r)-f(l-1));
}
return 0;
}
