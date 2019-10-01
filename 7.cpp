#include<stdio.h>
int main()
{
int h,m,s;
printf("input hrs mins secs");
scanf("%d%d%d",&h,&m,&s);
int t=3600*h+60*m+s;
printf("total secs %d",t);
return 0;
}
