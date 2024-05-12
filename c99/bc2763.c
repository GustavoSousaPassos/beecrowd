#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char vec[15];
    int i;
    
    fgets(vec, sizeof(vec), stdin);
    
    char *token = strtok(vec, ".-");
    
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ".-");
    }
    return 0;
}
