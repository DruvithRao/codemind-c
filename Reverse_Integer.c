#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
    }

    printf("%d",sum);
}