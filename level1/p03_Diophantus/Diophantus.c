#include<stdio.h>

int main()
{
	int x;
	for (x=12;x<100;x++)
	{
		if(x%12==0 && x%7==0)
		{
			if(x/6+x/12+x/7+5+x/2+4==x)
			{
		    	printf("x=%d",x);
	    	}
		}
	}
	return 0;
} 
