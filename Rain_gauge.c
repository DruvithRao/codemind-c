#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<3)
        {
            printf("LIGHT
");
        }
        else if(a>=7)
        {
            printf("HEAVY
");
        }
        else if(a>=3&&a<7)
        {
            printf("MODERATE
");
        }
    }
}