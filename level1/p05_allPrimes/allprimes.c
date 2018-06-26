#include<stdio.h>
#include<time.h> 
int main()
{
	clock_t begin,end;
	double cost;
	
	begin=clock();
	
	int x;
		
	for(x=2;x<1000;x++)
	{
		int i;
		int isPrime=1;
		for(i=2;i<x;i++)
		{
			if(x % i==0)
			{
			    isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{
			printf("%d ",x);
		}
    }  
    printf("\n");
    
    end=clock();
    cost=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("constant CLOCKS_PER_SEC is: %ld,time cost is : %lf seconds",CLOCKS_PER_SEC,cost);
    
    return 0;
}
