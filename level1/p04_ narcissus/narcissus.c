#include<stdio.h>
#include<math.h>
int main()
{
	
	int x;
	int i;
	for(x=100;x<1000;x++)
	{
	    int digit[3];
	    int t=x;
	    
		for(i=0;i<3;i++)
	    {
		   digit[i]=t%10;
		   t/=10;
    	}
    
        int sum=0;
        for(i=0;i<3;i++)
        {
        	sum+=pow(digit[i],3);
        }
	
       if(sum==x)
	   {
		    printf("%d\t",x);
	   }
	}
    return 0;
}
