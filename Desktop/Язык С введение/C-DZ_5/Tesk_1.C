#include <stdio.h>
 
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    printf("Введите А\n");
    scanf("%d", &a);
    printf("Введите B\n");
    scanf("%d", &b);
    for(int i = a; i <= b; i++) sum+=i*i;
    printf("Сумма: %d\n", sum);
    return 0;
}