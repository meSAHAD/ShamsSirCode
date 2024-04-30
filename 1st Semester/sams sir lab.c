#include <stdio.h>
int main()
{
    int n, sum,num,fla;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        int flag = 1;
        for(int j = 2; j *j < num; j++){
            if(num % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag) sum =sum+num;
    }

    printf("%d\n", sum);
    for(int i = 2; i <sum/2; i++)
    { int fla;
        if (sum%i==0){fla=1;}

    }
    if (fla) {printf(" Prime");}
        else {printf("Not Prime");}
}
