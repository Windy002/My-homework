#include <stdio.h>
int main() 
{ int year=0, month=0, day=0,days=0,i=0;
   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  printf("��������ݣ�");
  scanf("%d",&year);
  printf("\n�������·ݣ�");
  scanf("%d",&month);
  printf("\n��������ٺţ�");
  scanf("%d",&day);
   for(i=0;i<month-1;i++)
  days+=a[i];
  
  days+=day; 
   if(year/4==0&&year/100!=0||year/400==0)
   printf("\n����%d��ĵ�%d�졣",year,days+1);
   else
   printf("\n����%d��ĵ�%d�졣\n",year,days);
   
   return 0;
}

