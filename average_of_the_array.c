#include<stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=sum/n;
    printf("%.2f",avg);
}