#include <stdio.h>
 
int main()
{
    const int ROWS = 7;
    const int CHARS = 7;
    int rows, chars;
    
     for(rows = 0; rows < ROWS; rows++)
     { 
        for(chars = 'A'; chars < ('A'+rows); chars++) 
           printf("%c", chars);
         printf("\n");
     }
     
     
    return 0;
}