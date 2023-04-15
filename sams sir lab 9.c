#include<stdio.h>
int Num[50];
int add;
int N;
void inputcase()
{
    scanf("%d", &N);
    for(int i=0;i<N;i++)
    {
        scanf("%d", &Num[i]);
    }
}
int primeFind(int n)
{
    int Prime=1;
    if(n==0 || n==1)
        Prime=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            Prime=0;
            break;
        }
    }
    return Prime;
}
void solveCase()
{
    int p=0;
    add=0;
    for(int i=0;i<N;i++)
    {
        p=Num[i];
        if(primeFind(p)==1)
            add+=p;
    }
}
void printCase()
{
    if(primeFind(add)==1){
        printf("%d is prime", add);
    }
    else{
        printf("%d is not prime", add);
    }

}
int main()
{
    inputcase();
    solveCase();
    printCase();
    return 0;
}
