#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,rev=0,rem,o,p,tc;
        scanf("%d",&m);
        o=m%10;
        while(m)
        {
            rem=m%10;
            rev=rev*10+rem;
            m=m/10;
        }
        p=rev%10;
        tc=p+o;
        printf("%d
",tc);
    }
        
        
        
    
}
