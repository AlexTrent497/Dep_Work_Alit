#include <stdio.h>

int main(void)
{
	 
	int num,x,r_num=0;
printf("Задайте номер: ");
scanf("%d",&num);
printf("\nThe Заденный номерr = %d",num);
while(num>=1)
{
x=num%10;
r_num=r_num*10+x;
num=num/10;
}
printf("\nThe перевёрнутый номер = %d",r_num);
return 0;

}