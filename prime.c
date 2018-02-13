
#include<stdio.h>
int main()
{
    int n,i,count;
    printf("\n Enter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
    {
        count++;
    }
    }
    if(i==2)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
        
    }
}
