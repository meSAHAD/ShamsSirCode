#include<stdio.h>
void Sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;
    for (int i = i + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    int temp = array[min_idx];
  array[min_idx] = array[i];
  array[i] = temp;
  }
}

int median(int arr[],int n)
{
    if(n & 1){
        return arr[n/2];
    }
    return (arr[n/2-1] + arr[n/2]) / 2;
}

int primeFinder(int n)
{
    int isPrime=1;
    if(n==0 || n==1)
        isPrime=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    return isPrime;
}

int reversNum(int n)
{
    int r=0;
    while(n)
    {
        r=(r*10) + (n%10);
        n/=10;
    }
    return r;
}

int digitSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int getMaxFactor(int n) {
   int i, max = -1;
   while(n % 2 == 0) {
      max = 2;
      n = n/2;
   }
   for(i = 3; i <n; i++){
      while(n % i == 0) {
         max = i;
         n = n/i;
      }
   }
   if(n > 2) {
      max = n;
   }
   return max;
}



int main()
{
    //freopen("testcase1.txt", "r", stdin);
   // freopen("testcase2.txt", "r", stdin);

    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    Sort(a,n);
    int x= median(a,n);

    int y= primeFinder(x);
    if(y==0){
        printf("LOOSER");
        return 0;
    }
    int z= reversNum(x);
    if(z!=x){
        printf("LOOSER");
        return 0;
    }

    int cecker=digitSum(z);
    int chekRNP=primeFinder(cecker);
    if(chekRNP==1) {
        printf("WINNER");
        return 0;
    }

    int FMF=getMaxFactor(cecker);
    if(FMF==1){
        printf("WINNER");
        return 0;
    }
    else {
        int FMF2=getMaxFactor(FMF);
        int abc=primeFinder(FMF2);
        if(abc==1){
            printf("WINNER");
            return 0;
        }
        else printf("LOOSER");

    }


    return 0;
}
