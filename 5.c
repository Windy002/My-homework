#include <stdio.h>
int main() 
{ int a[20];
  int b[11]={0};
  int i=0,k=150,x=154; 
  printf("请输入这20名同学的身高：");
   for(i=0;i<20;i++)
   { scanf("%d",&a[i]); 
     if(a[i]<150) b[1]++;
     else switch((a[i]-150)/5) 
     {
	 case 0: b[2]++;break;
     case 1: b[3]++;break;
     case 2: b[4]++;break;
     case 3: b[5]++;break;
     case 4: b[6]++;break;
     case 5: b[7]++;break;
     case 6: b[8]++;break;
     case 7: b[9]++;break;
    default: b[10]++;break;
    }
  }  
      printf(" 各人数:>\n150以下:%2d\n",b[1]);
    for(i=2;i<10;i++,k+=5,x+=5)
       printf("%d-%d:%2d\n",k,x,b[i]);
      printf("189以上:%2d\n",b[10]);
   return 0;
}

