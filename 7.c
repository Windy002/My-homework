#include <stdio.h>
#define x 20 
int main() 
{  
  int lamp[x+1]={0};//�±�Ϊ0��Ҫ ��ȫ����ֵΪ0 
  int i=0;
  int n=0;
  printf("�Ƶ�����Ϊ:%d\n",x); 
  for(i=2;i<=x;i+=2)
    lamp[i]=1;//��0��ʾ�أ�1��ʾ�� 
    
for(n=3;n<=x;n++)
{  for(i=n;i<=x;i+=n)
   {   if(lamp[i]) lamp[i]=0;
       else  lamp[i]=1;
   }
}
  for(i=1;i<=x;i++)
	if(lamp[i]==1) printf("��%-2dյ���ǿ���\n",i); 
   return 0;
}

