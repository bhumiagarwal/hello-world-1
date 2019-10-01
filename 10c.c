#include <stdio.h>
int main()
{
int i=-1,j=-1,k=0,l=2,m;
m=++i&&j++&&++k||++l;
  //prints 4 integer values
printf("%d %d %d %d %d",i,j,k,l,m);
return 0;
}
