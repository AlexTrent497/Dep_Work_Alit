#include <stdio.h>
 


   int main(void)
{
    int num[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter integer #%d: ", i+1);
        scanf("%d", &num[i]);
    }
    int max = num[0];
    
    for(int i = 1; i < 5; i++)
    {
        if(num[i] > max)
            max = num[i];      
                  
    }
    printf("Largest = %d\n", max);
    
    
 
    return 0;
}