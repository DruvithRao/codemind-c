#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d%d%d",&n,&j,&p);
    for(i=1;i<=j;i++)
    {
        p=n*i;    
        printf("%d x %d = %d
",n,i,p);
    }

    
    
}