#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define size 80
 
void deleteSpace(char *line, int pos)
{   int len = strlen(line);
    while(pos < len)
    {   line[pos] = line[pos+1];
        pos++;
    }
}
 
void analyze (char *line)
{   int i = 0, len = strlen(line);
    while (i < len)
    {   if(line[i] == ' ' && line[i+1] == ' ')
        {   deleteSpace(line, i+1);
            len--;  
        }
        else
            i++;
    }
}
 
int main() 
{   setlocale(LC_ALL, "");
    int i, n;
    
    printf ("Введите количество строк:\n");
    scanf ("%d", &n);
    getchar();                                 
    
    char **text = (char**) malloc(n * sizeof(char*));
    for(i = 0; i<n; i++)
        text[i] = (char*) malloc (size);
    
    printf ("\nВведите текст:\n");
    for (i = 0; i< n; i++)
    {   fgets (text[i], size, stdin);
        text[i][strlen(text[i]) - 1] = '\0';    
        analyze(text[i]);
    }
    
    printf ("\nТекст после обработки:\n");
    for (i = 0; i< n; i++)
        puts (text[i]);
 
    for(i = 0; i<n; i++)
        free(text[i]);
    free(text);
 
    getchar();
    return 0;
}    