
#include <stdio.h>

int main()
{
    int i,max,a[10],n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        
        if(max>a[i])
    {
        printf("%d",i+1);
        break;
    }
    
    }
    return 0;
}
