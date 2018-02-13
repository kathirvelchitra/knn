#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the a and b values:");
    scanf("%d%d",&a,&b);
    c=a-b;
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
