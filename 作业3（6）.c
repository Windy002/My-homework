# include<stdio.h>
int main() 
{ int z,y,j=105,k=555,l=1005;
  double s,o=0.03,p=0.10,q=0.20,r=0.25;
  printf("���������Ĺ����ܶ"); 
  scanf("%d",&z);
  y=z-3500;
if(y>0&&y<=35000)
 {
 if (y>0&&y<=1500)
  s=y*o;
 else if(y>1500&&y<=4500)
  s=y*p-j;
 else if(y>4500&&y<=9000)
  s=y*q-k; 
 else if(y>9000&&y<=35000)
  s=y*r-l;
  printf("���ĸ�������˰Ϊ��%.2lf",s);
}
else 
 { 
  if(y>=-3500&&y<=0)
   printf("���ĸ�������˰Ϊ:0.00");
 else if(y>35000)
  printf("�Բ���������������������˶Ժ��ٴ����룬лл��");
}
  return 0; 	
 }

