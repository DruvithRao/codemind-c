#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int r=pow(a,b);
    int x=r%c;
    printf("%d",x);
}