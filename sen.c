
#include<stdio.h>
void main()
{
char s[50];
int i,count=0,j,c;
printf("\n Enter a sentence");
scanf("%[^\n]",&s);
for(i=0;s[i]!='\0';i++)
{
    c++;
}
for(j=0;j<c;j++)
{
if(s[j]==' ')
{
count++;
}
}
printf("No.of.words %d:",count);
}


