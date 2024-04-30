#include<stdio.h>
int midElement(int arr[],int );
int midElement(int arr[],int n)
{
    if(n & 1){
        return arr[n/2];
    }
    return (arr[n/2-1] + arr[n/2]) / 2;
}
int check_prime(int a)
{
    if(a==0 || a==1)
        return 0;
    for ( int c = 2 ; c <a ; c++ )
    {
        if ( a%c == 0 )
            return 0;
    }
    return 1;
}
int reverseNumber(int num)
{
    int reversedNum = 0;
    while (num > 0)
    {
        reversedNum = (reversedNum * 10) + (num % 10);
        num  = num / 10;
    }
    return reversedNum;
}

int checkPalindrome(int number)
{
  int temp, remainder, rev=0;
  temp = number;
  while( number!=0 )
  {
     remainder = number % 10;
     rev = rev*10 + remainder;
     number /= 10;
  }
  if ( rev == temp ) return 0;
  else return 1;
}
int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum +  (num % 10);
        num = num / 10;
    }
    return sum;
}

int main()
{
    freopen("testcase2.txt", "r", stdin);
    int n, a[1111];

    scanf("%d",&n);
    for (int i=0;i<n;i++){

        scanf("%d",&a[i]);
    }

      int result= midElement(a,n);

      int result1=check_prime(result);
      if(result1==0){printf("LOOSER");}
      else
      {
         int result3=checkPalindrome(result1);
         if (result3==0){printf("LOOSER");}
         else
         {
           int result4=digitSum(result);
           int result5=check_prime(result4);
           if(result5==0){printf("winner\n");}
           else {{printf("LOOSER");}}

         }
      }

      return 0;
}
