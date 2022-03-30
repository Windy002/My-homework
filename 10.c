#include<stdio.h>
#define n 15
int main()
{ int arr[n][n]={1};
  int i,j;
  for(i=0;i<n;i++)//第一个for控制行 
 {
  for(j=0;j<=i;j++)//第二个控制列 
    { if(i>0)
       {    arr[i][j]=arr[i-1][j]+arr[i-1][j-1];//计算方法 
	        printf("%d	",arr[i][j]);
	   }
      else  printf("%d	",arr[i][j]);//第一个数是特殊，单独输出 
    
	}
	putchar('\n');
 }
 
return 0;
 }

