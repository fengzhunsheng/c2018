#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

struct Node
{
	int data;
	int nodeorder;
	struct Node *pNext;
};

struct Node *Createlist(void);
void TraverseList(struct Node *pHead);
int Find5(struct Node *pHead);
int len;

int main()
{
	struct Node *pHead=NULL;
	pHead=Createlist();
	TraverseList(pHead);
	Find5(pHead);
	return 0;
}

struct Node *Createlist(void)
{
	int i=0,val;
	len=0;
	struct Node *pHead=(struct Node *)malloc(sizeof(struct Node));
	if(pHead==NULL)
	{
		printf("malloc fail!\n");
		exit(-1);
	}
	struct Node *pTail=pHead;
	pTail->pNext=NULL;
	printf("input -1 stop!\n");
	printf("input %d node value:",++i);
	scanf("%d",&val);
	while(val!=-1)
	{
		struct Node *pNew=(struct Node *)malloc(sizeof(struct Node));
		if(pNew==NULL)
		{
			printf("malloc fail!\n");
			exit(-1);
		}
		pNew->data=val;
		pNew->nodeorder=i; 
		pTail->pNext=pNew;
		pNew->pNext=NULL;
		pTail=pNew; 
     	printf("input %d node value:",++i);
		scanf("%d",&val);
		len++; 
	} 
	return pHead;
}

void TraverseList(struct Node *pHead)
{
	int a[len],i;
	struct Node *p=pHead->pNext;
	
	if(pHead->pNext==NULL)
	{
		printf("list empty!");
	}
	else
	{
		while(p!=NULL)
		{
			for(i=len-1;i>=0;i--)
			{
				a[i]=p->data;
				p=p->pNext;
			}
		}
		for(i=0;i<len;i++)
        {     
		    printf("%d ",a[i]);
        }
	}
	printf("\n");
}

int Find5(struct Node *pHead)
{
	int i;
	struct Node *m=pHead->pNext;
	if(pHead->pNext==NULL)
	{
		printf("list empty!");
	}
	else
	{
		for(i=0;i<len;i++)
        {
	        if(m->data==5)
	        {
	   	        printf("%d ",m->nodeorder);
	        }
	        else
	        {
	        	printf("-1 ");
			}
	        m=m->pNext;
	    }
	}
}

