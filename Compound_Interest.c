#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,a;
    scanf("%lf%lf%lf",&p,&r,&t);
    a=p*pow((1+(r/100)),t)-p;
    printf("%0.2lf",a);
}
