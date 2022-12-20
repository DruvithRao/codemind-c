#include<stdio.h>
int main()
{
    int n,i,sum=0,rem,x;
    scanf("%d",&n);
    x=n;
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}