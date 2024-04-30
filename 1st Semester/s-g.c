#include<stdio.h>
#define        ll      long long int
//using namespace std;
int main()
{
    int t;
     scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int s[10000000];
         scanf("%d",&s);
        if(s[4]=='s')printf("Case %d: %d",i,s);
        else{
             printf("Case %d: https",i);
            for(ll i=4;i<s;i++){
                 printf("%d",s[i]);
            }
             printf("\n");
        }
    }
    return 0;
}
