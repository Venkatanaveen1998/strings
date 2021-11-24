#include <stdio.h>
#include <string.h>
#include"pal.h"
int main()
{
  	char str[100];
  	int i,len,flag;
        printf("\n Please Enter any String :  ");
  	gets(str);
  	len = strlen(str);
  	flag=pal(str,len);
	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	
	
  	return 0;
}
