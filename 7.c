#include <stdio.h>
#define x 20 
int main() 
{  
  int lamp[x+1]={0};//下标为0不要 且全部赋值为0 
  int i=0;
  int n=0;
  printf("灯的数量为:%d\n",x); 
  for(i=2;i<=x;i+=2)
    lamp[i]=1;//用0表示关，1表示开 
    
for(n=3;n<=x;n++)
{  for(i=n;i<=x;i+=n)
   {   if(lamp[i]) lamp[i]=0;
       else  lamp[i]=1;
   }
}
  for(i=1;i<=x;i++)
	if(lamp[i]==1) printf("第%-2d盏灯是开的\n",i); 
   return 0;
}

