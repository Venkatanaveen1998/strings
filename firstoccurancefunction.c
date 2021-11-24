#include<stdio.h>
void fword(char *s,char *w)
{
    int i=0,k=0,c,index;
    while(s[i]!='\0')
    {
    	
		if(s[i]==w[0])
    	{
    		k=1;
    		for(c=1;w[c]!='\0';c++)
    		{
    			if(s[i+c]!=w[c])
	   			{
				 k=0;
				 break;
				}
		}
	}
		if(k==1)
		{
				index=i;
		}
		i++;
	//	k=0;     
     }
    if(k==1)
            printf("word is first occurred at location:%d ",index);
    else
        printf("word is not occurred in the string ");

}
