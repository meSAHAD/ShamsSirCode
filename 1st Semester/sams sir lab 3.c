#include<stdio.h>
float a;
float b;
float c;
void inputase()
{
    scanf("%f%f",&a,&b);
}
void solvecase()
{
    if (b==0){printf("Infinity");}
    else c=a/b;
}
void outputcase()
{
    printf("%f",c);
}

int main()
{
    inputase();
    solvecase();
    outputcase();
}
