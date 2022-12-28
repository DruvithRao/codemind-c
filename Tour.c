#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    int n,m,d;
    scanf("%d%d",&n,&m);
    d=(n*5)+(m*7);
    
    printf("%d
",d);
    }
}