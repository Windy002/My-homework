#include <stdio.h>
int main() 
{ int year=0, month=0, day=0,days=0,i=0;
   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  printf("请输入年份：");
  scanf("%d",&year);
  printf("\n请输入月份：");
  scanf("%d",&month);
  printf("\n请输入多少号：");
  scanf("%d",&day);
   for(i=0;i<month-1;i++)
  days+=a[i];
  
  days+=day; 
   if(year/4==0&&year/100!=0||year/400==0)
   printf("\n这是%d年的第%d天。",year,days+1);
   else
   printf("\n这是%d年的第%d天。\n",year,days);
   
   return 0;
}

