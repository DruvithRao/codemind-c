#include<stdio.h>
int prime(int n);
int main()
{
    int r,i;
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
	
	int n,d1,d2,ap,bp,i;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(prime(i))
         {
             ap=i;
             d1=i-n;
             break;
         }
    }
    for(i=n;;i--)
     {
         if(prime(i))
         {
             bp=i;
             d2=n-i;
             break;
         }
     }
     if(d1<d2)
     {
         printf("%d
",ap);
     }
     else if(d1>d2)
     {
         printf("%d
",bp);
     }
     else
     {
         printf("%d
",bp);
     }
 }
}
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}