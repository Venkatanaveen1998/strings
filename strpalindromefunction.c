#include <stdio.h>
int pal(char *str,int len)
{
  
  	int i,flag;
  	flag = 0;
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			flag = 1;
			break;	
		} 
	}	
	
  	return flag;
}
