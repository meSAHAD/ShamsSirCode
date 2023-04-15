/*
Power function
square root
finding maximm & minimum
prime finder
reverse function
digit sum
absolute value
average or mean of a number list
median
factorial
leap year
area
unit conversation
number conversation

*/

//power
int power(int x, int y)
{
    int result =1;
    for(int i=1; i<=y; i++)
    {
        result=result*x;
    }
    return result;
}

//prime check
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

//reverse number
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

//palindrom
int palindrome(int x)
{
    int a=reverseNumber(x);
    if(x==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
//8- DIGIT SUM
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

//DIGIT SUM AVERAGE

double digitSumAverage(int num)
{
    int sum = 0, digitCount = 0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
        digitCount++;
    }
    double average = sum / digitCount;
    return average;
}

//MINIMUM IN ARRAY

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

//6 & 7-->Even odd Cheaker

int isEven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

//10--> Average  or mean of a number of list

double digitSumAverage(int num)
{
    double sum = 0, digitCount = 0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
        digitCount++;
    }
    double average = sum / digitCount;
    return average;
}

//LEAP YEAR

int leapyear(int year)
{

    if((year%4==0) && ((year%400==0) || (year%100!=0)))
    {
        printf("It is a leap year.\n");
    }
    else
    {
        printf("It is not a leap year.\n");
    }
}

//SQUARE ROOT

double sqrtnumber (double num)
{
    if(num<0)
    {
        printf("Negative number");
    }
    else
    {
        double temp = 0;
        double sqrt=num/2;
        while(sqrt!=temp)
        {
            temp=sqrt;
            sqrt=(num/sqrt+sqrt)/2;
        }
        printf("%0.2lf",temp);
    }
}
//ABSOLUTE VALUE
int absolutevalue(int a)
{
    int num =a;
    if(a<0)
    {
        num = a*-1;
        return num;
    }
    else
        return num;
}

//FACTORIAL
int fctrl(int n)
{
    if(n==1)
        return 1;
    return n * fctrl(n-1);
}


float circleArea(int n)
{
    float x=3.1416*n*n;
    return x;
}

//AREAR OF TRIANGLE RECTANGLE

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

//WEIGHT CONVERSION
float waightConv(float kg)
{
    float lb=kg* 2.20462;
    return lb;
}

int convertBintoDec(long long n)
{
    int dec = 0, i = 0, rem;

    while (n!=0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * power(2, i);
        ++i;
    }

    return dec;
}

//NUMBER CONVERSION
long long convertDectoBin(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n!=0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}
int convertDecToOct(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

long long convertOctToDec(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * power(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    return decimalNumber;
}

int convertBinToOct(long long bin)
{
    int oct = 0, dec = 0, i = 0;

    while (bin != 0)
    {
        dec += (bin % 10) * power(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

long long convertOctToBin(int oct)
{
    int dec = 0, i = 0;
    long long bin = 0;

    while (oct != 0)
    {
        dec += (oct % 10) * power(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

    while (dec != 0)
    {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

//11--->Find the median of a number list

int medianvalue(int a[],int n)
{
    double mid = 0;

    if ( n % 2 == 0)
    {

        return mid = (a[n/2] + a[n/2+1])/2.0 ;
    }

    else
    {
        return mid = a[n/2 + 1];
    }

}

//maxFrequency of a array
int maxFrequency(int arr[], int n)
{
    int mxValue= mxEleArra(arr,n);
    int cntArr[mxValue+1];

    for(int i=0; i<=mxValue; i++)
    {
        cntArr[i]=0;
    }
    int maxFrequencyCount=-1;
    for(int i=0; i<n; i++)
    {
        cntArr[arr[i]]++;
        if(cntArr[arr[i]] > maxFrequencyCount)
        {
            maxFrequencyCount=cntArr[arr[i]];
        }
    }
    return maxFrequencyCount;
}

//Prime Factor of a number;>>16
void prime_Factors(int n)
{
    for( int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if( 1== isPrime(i))
                printf("%d ",i);
        }
    }
}

//Odd Factor of a number;>>17
void odd_Factors(int n)
{
    for( int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(i%2==1)
                printf("%d ",i);
        }
    }
}

//Even Factor of a number;>>18
void even_Factors(int n)
{
    for( int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
                printf("%d ",i);
        }
    }
}

//Total Factor of a number;>>19
void total_Factors(int n)
{
    int cnt=0;
    for( int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
                cnt++;
        }
    }
    printf("Total Factor of Number %d = %d",n,cnt);
}

//SHORTING
int short(int *a,int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {

        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }

    }



}
print(int *a,int n)
{

    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


}


