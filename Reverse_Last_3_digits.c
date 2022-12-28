#include<stdio.h>
int main()
{
    int n,m,tc,rev=0,rem,t1;
    scanf("%d",&n);
    m=n%1000;
    int a=m;
    while(m!=0)
    {
        rem=m%10;
        rev=(rev*10)+rem;
        m=m/10;
    }
    tc=n-a;
    t1=tc+rev;
    {
        printf("%d",t1);
    }
    
}