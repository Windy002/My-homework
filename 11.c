#include<stdio.h>
int main()
{ int c[11]={0};
  int b[20];
  int p[11];
  int i,j,temp;
 
loop:
 printf("请输入候选人的投票编号（1-10）:");
  for(i=0;i<20;i++)
 {  scanf("%d",&b[i]);
	 if(b[i]>10||b[i]<1)
	  {printf("您输入有误，请重新输入！\n");
	   goto loop;
	  } 
 }
	
for(i=0;i<20;i++)
  { switch(b[i])
    { case 1:c[1]+=1;break;
      case 2:c[2]+=1;break;
      case 3:c[3]+=1;break;
      case 4:c[4]+=1;break;
      case 5:c[5]+=1;break;
      case 6:c[6]+=1;break;
      case 7:c[7]+=1;break;
      case 8:c[8]+=1;break;
      case 9:c[9]+=1;break;
      case 10:c[10]+=1;break;
	}
  }
  
 for(i=1;i<=9;i++)
  { for(j=i;j<=9;j++)
    if(c[i]<c[i+1])
   { c[i]=temp; c[i]=c[i+1]; c[i+1]=temp;
   }
  }
   
 for(i=1;i<=10;i++)
  printf("候选人%2d号:%-2d\n",i,c[i]);
  
return 0;
 }

