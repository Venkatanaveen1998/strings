#include <stdio.h>
#include <string.h>
#include"strcats.h"
int main()
{	
	char a[100], b[100];
printf("Enter the first string\n");
gets(a);
 printf("Enter the second string\n");
 gets(b);
strcating(a, b);
//printf("after concatenation: %s\n", a);
//printf("the string length is %d",strlen(a));
}
