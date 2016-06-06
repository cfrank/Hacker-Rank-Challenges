/* https://www.hackerrank.com/challenges/pangrams */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void check_pangram(char *string, int str_length);

int main()
{
    char *input_string = malloc(1001);
    fgets(input_string, 1000, stdin);
    
    check_pangram(input_string, (int)strlen(input_string));
    
    free(input_string);
    return 0;
}

void check_pangram(char *string, int str_length)
{
    char check_string[26];
    int length = 0;
    
    for(int i = 0; i < str_length; ++i){
        string[i] = tolower(string[i]);
        
        if(strchr(check_string, string[i]) == 0 &&
           string[i] != ' ' && isalpha(string[i])){
            check_string[length] = string[i];
            ++length;
        }
    }
    /* Null terminate the string */
    check_string[length] = '\0';
    
    if(length == 26){
        puts("pangram");
    }
    else{
        puts("not pangram");
    }
}