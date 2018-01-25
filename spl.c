

#include<stdio.h>
#include<string.h>
void main()
{
char a[50]="rose.*13";
int i,s;
printf("enter the spl char");
for(i=0;a[i]<=5;i++)
{
if(a[i]=='*')
printf("spl char count is %d",a[i]);
}
}
