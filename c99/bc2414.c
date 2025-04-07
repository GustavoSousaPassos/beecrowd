#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char line[1000];
    int seq[1000], i = 0, j;
    
    fgets(line, sizeof(line), stdin);
    
    char *token = strtok(line, " \n");
    
    while(token != NULL)
    {
        seq[i] = atoi(token);
        i++;
        token = strtok(NULL, " \n");
    }
    int big = seq[0];
    
    for(j = 1; j < i; j++)
        if(seq[j] > big) big = seq[j];
    
    printf("%d\n", big);
        
}
