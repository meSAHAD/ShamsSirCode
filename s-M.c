#include<stdio.h>  //problem m
char s[300];
int main()
{
    int T,cas=0;long long b;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s%lld",s,&b);
        if(b<0) b=-b;
        int i=0;
        if(s[i]=='-') i++;
        long long res=0;
        while(s[i])
            res=(res*10+(s[i++]-'0'))%b;
        if(res==0) printf("Case %d: divisible\n",++cas);
        else printf("Case %d: not divisible\n",++cas);
    }
    return 0;
}
