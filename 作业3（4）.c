#include <stdio.h>
#include <stdlib.h>
int main()
 { int a,b,c,A,B,C,h,m,s;
   long H,z; 
   printf("���������γ˳��ϳ���ʱ��(�м��ÿո����):");
   scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&A,&B,&C);
   H=(A*3600+B*60+C)-(a*3600+b*60+c);
   z=fabs(H);
   h=z/3600;m=(z/3600.0-z/3600)*60;s=(z/60.0-z/60)*60;
   printf("ʱ����Ϊ��%02d:%02d:%02d",h,m,s);
   if(z<=7200)
   printf("�������ܹ����Ż�1Ԫ��\n");
   else
   printf("�Բ����㲻�����ܹ����Żݡ�\n");
	return 0;
}
