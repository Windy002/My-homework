#include<stdio.h>
int main()
{ int a,b,M=31,m=30,Y=29,y=28;

 printf("���������ݺ�����(�м��ÿո����):");
  scanf("%d %d",&a,&b);
if(b==4||b==6||b==9||b==11)
  printf("���µ�����Ϊ��%d",m);
else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)   
  printf("���µ�����Ϊ��%d",M); 
else
{ if(b==2)
 { if(a%4==0&&a%100!=0||a%400==0)
  
  printf("���µ�����Ϊ��%d",Y);
   else  
  printf("���µ�����Ϊ��%d",y);}
}
return 0; 
}

