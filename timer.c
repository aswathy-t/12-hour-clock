#include<stdio.h>
int main()
{
int i=1,m=0,h=0,k;
while(h<12)
{
while(i<60)
{
for(k=0;k<0xffffff;k++);
for(k=0xffffff;k>=0;k--);
for(k=0;k<0xffffff;k++);
for(k=0xffffff;k>=0;k--);
printf("%d:%d:%d\n",h,m,i);
if(i==59)
m++;
if(m==60)
{
h++;
m=0;
}
if(m==60 && h==12)
{
m=0;
h=1;
return 0;
}
i++;
}
i=0;
}
return 0;
}	
