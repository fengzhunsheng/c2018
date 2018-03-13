#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void print(int i);

int main()
{
	int i;
	system("mode con cols=101 lines=30  ");
	for (i=0;i<=100;i++)
	{
		print(i);
    } 
    for (i=100;i>=0;i--) 
	{
		print(i);
	}
	return 0;
}

void print(int i)
{
    int j=0;
	while (j<i)
    {
	    printf(" ");
	    j++;
	}
	printf("C\n");
	Sleep(100);
	system("cls");
}

