#include <stdio.h>
int main() 
{ int a; long i;
  double n,L,e=0.035,f=0.044,g=0.050,h=0.065;
printf("���������ı���(Ԫ)�ʹ���(��)���м��ÿո������:");
scanf("%d %d",&i,&a);
switch (a)
{ case 1:printf("���ĸ�������˰Ϊ:%.2lf",i*a*e); break;
  case 2:printf("���ĸ�������˰Ϊ:%.2lf",i*a*f); break;
  case 3:printf("���ĸ�������˰Ϊ:%.2lf",i*a*g); break;
  case 5:printf("���ĸ�������˰Ϊ:%.2lf",i*a*h); break;
  default:printf("  �Բ�����������������˶Ժ��ٴ����룬лл��\n");
 } 
	return 0;
}

