#include<stdio.h>
#define MAX 100
int N;
int Num[MAX];
int Sum;

void readCase()
{
    scanf("%d", &N);
    for(int i=0;i<N;i++) {scanf("%d", &Num[i]);}
}
int primeFinder(int n)
{
    int isPrime=1;
    if(n==0 || n==1)
        isPrime=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){isPrime=0;break;}
    }
    return isPrime;
}
void solveCase()
{
    int a=0;
    Sum=0;
    for(int i=0;i<N;i++)
    {
        a=Num[i];
        if(primeFinder(a)==1)Sum+=a;
    }
    printf("%d\n",Sum);
}
void printCase()
{
    if(primeFinder(Sum)==1){printf("%d is prime", Sum);}
    else {printf("%d is not prime", Sum);}
}
int main()
{
    readCase();
    solveCase();
    printCase();
    return 0;
}
