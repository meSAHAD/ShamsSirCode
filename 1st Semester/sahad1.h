int power(int ,int );
int primeFinder(int );
int reversNum(int );
int digitSum(int );
double avarage(int );
int mxEleArra(int a[],int );
int minEleArra(int a[],int);
double digitSumAvg(int );
int abs(int );
int mxFrequency(int arr[],int );
int minElement(int arr[],int );
int midElement(int arr[],int );
int fctrl(int );
int factorOfNumber(int );
int modeOfArra(int a[],int );
int leapYear(int );
float circleArea(int );
float triangleArea(int ,int );
int rectangleArea(int ,int );
float tempConv(float );
float distanceConv(float );
float waightConv(float );
int convertBintoDec(long long );
long long convertDectoBin(int );
int convertDecToOct(int );
long long convertOctToDec(int );
int convertBinToOct(long long );
long long convertOctToBin(int );
void swap(int *a, int *b);
void Sort(int array[], int size);

int power(int a,int b )
{
    int r=1;
    for(int i=1;i<=b;i++)
    {
        r*=a;
    }
    return r;
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

double avarage(int x)
{
    int array[x];
    int sum=0;
    for(int i=0; i<x; i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    double av=((double)sum/x);
    return av;
}

int mxEleArra(int a[],int n)
{
    int m=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>m) m=a[i];
    }
    return m;
}

int minEleArra(int a[],int n)
{
    int m=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<m)m=a[i];
    }
    return m;
}

double digitSumAvg(int num)
{
  int sum=0,digitCount=0;
  while(num>0){
    sum=sum+(num%10);
    num=num/10;
    digitCount++;
  }
  double average=(sum*1.0)/digitCount;
  return average;
}

int abs(int num)
{
    if(num<0) return num*-1;
    return num;
}

int maxFrequency(int arr[], int n)
{
    int mxValue= mxEleArra(arr,n);
    int cntArr[mxValue+1];

    for(int i=0; i<=mxValue; i++){
        cntArr[i]=0;
    }
    int maxFrequencyCount=-1;
    for(int i=0; i<n; i++){
        cntArr[arr[i]]++;
        if(cntArr[arr[i]] > maxFrequencyCount){
            maxFrequencyCount=cntArr[arr[i]];
        }
    }
    return maxFrequencyCount;
}

int minElement(int arr[],int n)
{
    int mn= 1000000000;
    for(int i=0; i<n; i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    }
    return mn;
}

int midElement(int arr[],int n)
{
    if(n & 1){
        return arr[n/2];
    }
    return (arr[n/2-1] + arr[n/2]) / 2;
}

int fctrl(int n)
{
    if(n==1)
    return 1;
    return n * fctrl(n-1);
}

int factorOfNumber(int n)
{
    int counter;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)counter++;
    }
    return counter;
}

int modeOfArra(int a[], int n)
{
    int maxVal=0, count=0, maxCount=0;
    for(int i=0;i<n;i++) {
        count = 0;
        for(int j=0;j<n;j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxVal = a[i];
         }
    }
    return maxVal;
}

int leapYear(int y)
{
    int f=0;//not leap year
    if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))
    {
        return 1;
    }
    return 0;
}

float circleArea(int n)
{
    float x=3.1416*n*n;
    return x;
}

float triangleArea(int b,int h)
{
    float x=b*(h/2.0);
    return x;
}

int rectangleArea(int a,int b)
{
    int x=a*b;
    return x;
}

float tempConv(float celsius)
{
    float fahrenheit = (celsius * 9 / 5.0) + 32;
    return fahrenheit;
}

float distaceConv(float distance)
{
    float meter = distance * 1000;
    float feet = distance * 3280.84;
    float inches = distance * 39370.1;
    float centimeter = distance * 100000;
}

float waightConv(float kg)
{
    float lb=kg* 2.20462;
    return lb;
}

int convertBintoDec(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * power(2, i);
    ++i;
  }

  return dec;
}

long long convertDectoBin(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void Sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;
    for (int i = i + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[i]);
  }
}

int convertDecToOct(int decimalNumber) {
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

long long convertOctToDec(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * power(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}

int convertBinToOct(long long bin) {
    int oct = 0, dec = 0, i = 0;

    while (bin != 0) {
        dec += (bin % 10) * power(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

long long convertOctToBin(int oct) {
    int dec = 0, i = 0;
    long long bin = 0;

    while (oct != 0) {
        dec += (oct % 10) * power(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}
int sumofarray(int a[],int n)
{
    int min,max,i;
    min=max=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }

    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
}


