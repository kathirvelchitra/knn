
#include <stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int len,i,word=1;
	printf("ENTER A STRING: ");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			word=word+1;
	}
printf("\n%s",word);
}
