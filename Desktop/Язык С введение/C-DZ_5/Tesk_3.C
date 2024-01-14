#include <stdio.h>

int main(void)
{
	
{int a;
scanf("%d", &a);
while(a>0)
{
   if((a%10)%2==0)
    printf("ДА ");
   else
    printf("НЕТ ");
   a/=10;
}
return 0;
}
}