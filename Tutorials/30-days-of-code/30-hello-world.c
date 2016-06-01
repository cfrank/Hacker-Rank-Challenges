/* https://www.hackerrank.com/challenges/30-hello-world */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char hello_string[] = "Hello, World.";
    char *input_string = malloc(201);
    fgets(input_string, 200, stdin);
    
    printf("%s\n", hello_string);
    printf("%s", input_string);
    
    free(input_string);
}