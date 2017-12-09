#include<stdio.h>
int main()
{int a,b,i;
a=1,b=1;
printf("%d %d ",a,b);
for(i=1;i<=5;i++)
{a+=b;
b+=a;
printf("%d %d ",a,b);
}
return 0;
}

