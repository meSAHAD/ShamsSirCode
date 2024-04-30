
#include<stdio.h>

int main()
{
    char cha;
    int j = 0;

    while(scanf("%c",&cha)){
        if(cha == '"'){
            j++;
            if(j%2==1) printf("``");
            else printf("''");
        }
        else printf("%c",cha);
    }

  return 0;
}
