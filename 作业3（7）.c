#include <stdio.h>
int main() 
{ int a; long i;
  double n,L,e=0.035,f=0.044,g=0.050,h=0.065;
printf("请输入您的本金(元)和存期(年)（中间用空格隔开）:");
scanf("%d %d",&i,&a);
switch (a)
{ case 1:printf("您的个人所得税为:%.2lf",i*a*e); break;
  case 2:printf("您的个人所得税为:%.2lf",i*a*f); break;
  case 3:printf("您的个人所得税为:%.2lf",i*a*g); break;
  case 5:printf("您的个人所得税为:%.2lf",i*a*h); break;
  default:printf("  对不起，您的输入有误，请核对后再次输入，谢谢！\n");
 } 
	return 0;
}

