#include<stdio.h>
#include<string.h>
#define NUMBER 200
int main()
{
	char str1[NUMBER];
	char str2[NUMBER];
	
	printf("请输入明文:\n ");
	scanf("%[^\n]",str1);
	
	int len,i,num;
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		num=-1;
		if(str1[i]>='a' && str1[i]<='z')
		{
			num=str1[i]-'a'+1;
			num=num*3%52;
		}
		else if(str1[i]>='A' && str1[i]<='Z')
		{
			num=str1[i]-'A'+27;
			num=num*3%52;
		}
		
		if(num>0 && num<=26)
		{
			str2[i]=num+'a'-1;
		}
		else if(num>=27 && num<=51)
		{
			str2[i]=num+'A'-27;
		}
		else if(num==0)
		{
			str2[i]='Z';
		}
		else
		{
			str2[i]=str1[i];
		}
	}
	str2[len]='\0';
	printf("密文为:%s\n",str2);
	
	return 0;
}
