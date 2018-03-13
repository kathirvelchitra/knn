
#include<stdio.h>
void main()
{
    int n,k,i,a[10];
    printf("enter the numbers");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k-1]);
}
