#include<stdio.h>
int main()
{
    int n,m,k,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i+=2)
    {
        k=n*i;
    
    printf("%d x %d = %d
",n,i,k);
    }
}