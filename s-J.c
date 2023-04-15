#include<stdio.h>  //problem J
int main()
{

int i,j,k=0,t,n,A[100000],b[10000];
for(i=1;i<=1000;i++)
{


    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    A[i]++;


    }

    if(A[i]>k)
    k=A[i];

}
k=1;
for(i=1;i<=32;i++)
{
      for(j=1000;j>=1;j--)
      {
          if(A[j]==i)
          {
            b[k]=j;
            k++;
          }
      }
}
scanf("%d",&t);
for(i=1;i<=t;i++)
{
  scanf("%d",&k);
 printf("Case %d: %d\n",i,b[k]);

}



return 0;


}

