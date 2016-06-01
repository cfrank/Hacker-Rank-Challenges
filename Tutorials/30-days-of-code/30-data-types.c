#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int input_int;
    double input_dbl;
    char *input_str = malloc(201);

    scanf("%d", &input_int);
    scanf("%lf", &input_dbl);

    int checkChar;
    do{
        checkChar = getchar();
    }while(checkChar != '\n' && checkChar != EOF);

    fgets(input_str, 200, stdin);
    
    printf("%d\n", input_int + i);
    printf("%1.1lf\n", input_dbl + d);
    printf("%s%s", s, input_str);

    free(input_str);
}