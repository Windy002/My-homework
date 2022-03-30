#include<stdio.h>
#include<string.h>
int main()
{ char *p,*q,str[20];
  int l;
  puts("请输入一个字符串：");
  gets(str);
  l=strlen(str)-1;

 for(p=str,q=str+l;q>=p;)
   { 
     if(*p==*q) { p++; q--; }
     else { printf("不是回文！\n");break;}
   }
   if(p>q) printf("是回文！\n");
 	
return 0;	
 } 
