#include<stdio.h>
int n,result;

void readCase()
{
    scanf("%d", &n);
}
int check_prime(int a)
{
   int c;
    if(a==0 || a==1)
        return 0;
   for ( c = 2 ; c <a ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
void printcase()
{
    result = check_prime(n);
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
}
int main()
{
   readCase();
   int check_prime(int a);
   printcase();
   return 0;
}

