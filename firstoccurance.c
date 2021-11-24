#include<stdio.h>
#include <string.h>
#include"firstoccurance.h"
int main()
{
    char s[100],w[100];  
     printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
   fword(s,w);
}
