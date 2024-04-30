#include<stdio.h>
int main()
{
    int i,n, a[100], sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(i=2;i<a[i];i++)
        {
            if(a[i]%i==0){break;}
            else {sum=sum+a[i];}
        }
    }
    printf("%d",sum);
}
