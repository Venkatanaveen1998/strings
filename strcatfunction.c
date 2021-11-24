#include<stdio.h>
#include<string.h>
void strcating(char *a,char *b)
{
	strcat(a,b);
	printf("new string : %s\n",a);
	printf("%d\n",strlen(a));
}
