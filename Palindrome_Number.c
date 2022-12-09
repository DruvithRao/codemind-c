#include<stdio.h>
int main()
{
    int p,i;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
    int n,rev=0,rem,o;
    scanf("%d",&n);
    o=n;
    while(o!=0)
    {
        rem=o%10;
        rev=rev*10+rem;
        o=o/10;
    }
    if(rev==n)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
    
}