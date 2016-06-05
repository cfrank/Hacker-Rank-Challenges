/* https://www.hackerrank.com/challenges/30-review-loop */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    
    /* Clear stdin from all new lines */
    int checkChar;
    do{
        checkChar = getchar();
    }while(checkChar != '\n' && checkChar != EOF);
    
    for(int i = 0; i < test_cases; ++i){
        /* Read in the string */
        char *input_str = malloc(10010);
        fgets(input_str, 10010, stdin);
        
        char even_str[10000] = "";
        char odd_str[10000] = "";
        
        for(size_t j = 0; j < strlen(input_str); ++j){
            if((j & 1) == 0 && input_str[j] != '\n'){
                strncat(even_str, &input_str[j], 1);
            }else if(input_str[j] != '\n'){
                strncat(odd_str, &input_str[j], 1);
            }
        }
        printf("%s %s\n", even_str, odd_str);
        
        free(input_str);
    }
    return 0;
}