#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k1=0,k2=0,n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,(k1+1));
            printf("%d ",a-1);
            k1++;
        }
        else
        {
            b=pow(3,(k2+1));
            printf("%d ",b-1);
            k2++;
        }
    }
}