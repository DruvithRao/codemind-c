#include<stdio.h>
int main()
{
    int n;
    float t,a;
    scanf("%d",&n);
    if(n<=199)
    {
        a=n*1.20;
    }
    else  if(n>=200&&n<400)
    {
        a=n*1.50;
    }
    else if(n>=400&&n<600)
    {
        a=n*1.80;
    }
    else if(n>=600)
    {
        a=n*2.00;
    }
    if(a>400)
    {
        t=a+(a*0.15);
    }
    else
    {
        t=a+100;
    }
    printf("%.2f",t);
}