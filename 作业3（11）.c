#include <stdio.h>
#include <stdlib.h>
int main() 
{ int i=2;
  double e=2.0,k=1;
   k*=i;   
   e=1.0/k+e;
      while (1/k>=1E-6)
      { i++;
	    k*=i;   
        e=1.0/k+e;
	  }
   printf("%lf\n",e);
	return 0;
}

