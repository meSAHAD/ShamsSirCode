#include<stdio.h>
#include<math.h>
#define LL long long
const int maxn = 1000000 + 5,
INF = 0x7fffffff;
double num[1000000 + 5];

int main()
{
    num[0] = 0;
    for(int i=1; i<maxn; i++)
        num[i] = num[i-1] + log(1.0 * i);
    int T, kase = 0;
    scanf("%d",&T);
    while(T--)
    {
        int n, base;
        scanf("%d%d",&n,&base);
        int ans = num[n]/log(1.0 * base) + 1;
        printf("Case %d: %d\n", ++kase, ans);
    }

    return 0;

}
