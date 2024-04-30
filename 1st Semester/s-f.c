#include<stdio.h>
#include<math.h>

int main()
{
    long long int tesrt,cs,N,m,n,i,j,k,l,x,y,cnt;
    scanf("%lld",&tesrt);
     for(cs=1; cs<=tesrt; cs++){
        scanf("%lld",&N);

        if(N==1){
            printf("Case %lld: 1 1\n",cs);
            continue;
        }
        n=ceil(sqrt(N));
        cnt=N-pow((n-1),2);

        if(cnt<=n){
            x=n; y=cnt;
        }
        else{
            x= 2*n-cnt, y=n;
        }
        if(n%2) printf("Case %lld: %lld %lld\n",cs,x,y);
        else printf("Case %lld: %lld %lld\n",cs,y,x);
     }
    return 0;
}
