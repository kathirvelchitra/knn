#include<stdio.h>
void main()
{
    int n,k,i,a[100];
    printf("enter the values");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(i==k)
    {
    printf("\n yes");
    break;
    }
    }
}
