
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i=1,average,total;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d%d%d%d%d%d%d",&b,&c,&d,&e,&f,&g,&h);
        if(f<=g && f<=h)
            average=(g+h)/2;
        else if(g<=f && g<=h)
            average=(f+h)/2;
        else if(h<=f && h<=g)
            average=(f+g)/2;
        total=b+c+d+e+average;
        if(total>=90)
            printf("Case %d: A\n",i++);
        else if(total>=80)
            printf("Case %d: B\n",i++);
        else if(total>=70)
            printf("Case %d: C\n",i++);
        else if(total>=60)
            printf("Case %d: D\n",i++);
        else if(total<60)
            printf("Case %d: F\n",i++);
    }
    return 0;
}
