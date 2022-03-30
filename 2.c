#include <stdio.h>
int main() 
{ int a[10];
  int i=0,t=0;
  
printf("请输入10个数字(空格隔开)：");
  for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
    printf("\n a[]=");
	for(i=0;i<10;i++)
	 printf("%2d ",a[i]);
	for(i=0;i<5;i++)
	{ t=a[i];
	  a[i]=a[9-i];
	  a[9-i]=t;
	} 
	printf("\n-a[]=");
	for(i=0;i<10;i++)
	 printf("%2d ",a[i]);
	return 0;
}

