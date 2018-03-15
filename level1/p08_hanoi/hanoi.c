#include<stdio.h>
 void move(char a,char b)
 {
     printf("%c->%c\n",a,b);
 }
 void han(int n,char a,char b,char c)
 {
     if(n>0)
     {
         han(n-1,a,c,b);
         move(a,b);
         han(n-1,c,b,a);
     }
 }
 int main()
 {
     int n;
     printf("please input layers:");
     scanf("%d",&n);
     printf("%d\n",(1<<n)-1);
     han(n,'A','B','C');
     return 0;
 }      
