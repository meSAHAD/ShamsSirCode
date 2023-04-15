#include<stdio.h>
#include<math.h>

double arrya[1000005];

void call()
{
    arrya[0]=0;
    for(int i=1;i<=1000000;i++){
        arrya[i]=arrya[i-1]+log10(i);
    }
}
int main(){

    call();
    int t,n,base,cs=1;

    scanf("%d",&t);

    while(t--){

        scanf("%d%d",&n,&base);

        int ans=(arrya[n]/log10(base));

        printf("Case %d: %d\n",cs++,ans+1);
    }
}
