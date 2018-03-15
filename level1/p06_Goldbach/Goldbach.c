#include<stdio.h>

int main()
{
	int prime[25];
	int x,i;

	int j=0;
	for(x=2;x<100;x++)
	{
		int isPrime=1;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
			    isPrime=0;
				break;
			}
		}

		if(isPrime==1)
		{
			prime[j]=x;
			j++;
		}
	}
	
	int y,m,n;
	for(y=6;y<100;y+=2)
	{
		for(m=0;m<25;m++)
		{
			for(n=0;n<25;n++)
			{
				if(y==prime[m]+prime[n])
				{
					printf("%d=%d+%d\t",y,prime[m],prime[n]);
						break;
				}
			}
			if(y==prime[m]+prime[n])
			{
				break;
			}
		}
	}
	return 0;
} 
