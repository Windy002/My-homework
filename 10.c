#include<stdio.h>
#define n 15
int main()
{ int arr[n][n]={1};
  int i,j;
  for(i=0;i<n;i++)//��һ��for������ 
 {
  for(j=0;j<=i;j++)//�ڶ��������� 
    { if(i>0)
       {    arr[i][j]=arr[i-1][j]+arr[i-1][j-1];//���㷽�� 
	        printf("%d	",arr[i][j]);
	   }
      else  printf("%d	",arr[i][j]);//��һ���������⣬������� 
    
	}
	putchar('\n');
 }
 
return 0;
 }

