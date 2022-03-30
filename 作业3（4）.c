#include <stdio.h>
#include <stdlib.h>
int main()
 { int a,b,c,A,B,C,h,m,s;
   long H,z; 
   printf("请输入两次乘车上车的时间(中间用空格隔开):");
   scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&A,&B,&C);
   H=(A*3600+B*60+C)-(a*3600+b*60+c);
   z=fabs(H);
   h=z/3600;m=(z/3600.0-z/3600)*60;s=(z/60.0-z/60)*60;
   printf("时间间隔为：%02d:%02d:%02d",h,m,s);
   if(z<=7200)
   printf("你能享受公交优惠1元。\n");
   else
   printf("对不起，你不能享受公交优惠。\n");
	return 0;
}
