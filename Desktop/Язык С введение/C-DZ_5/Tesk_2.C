#include <stdio.h>

int main(void)
{
	int num, count;
    printf("Введите число\n");
    scanf("%d", &num);
    num = num < 0 ? num * -1 : num;
    while (num > 0)
    {
        count ++;
        num = num / 10;
    }
    if (count == 3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return;
}