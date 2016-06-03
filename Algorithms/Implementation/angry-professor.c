/* https://www.hackerrank.com/challenges/angry-professor */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool class_canceled(int arrival_times[], int threshold, int students);

int main()
{
    int num_test_case;
    scanf("%d",&num_test_case);
    for(int i = 0; i < num_test_case; ++i){
        int num_students; 
        int last_threshold;
        scanf("%d %d",&num_students,&last_threshold);
        int arrival_times[num_students];
        for(int j = 0; j < num_students; ++j){
           scanf("%d",&arrival_times[j]);
        }
        if(class_canceled(arrival_times, last_threshold, num_students)){
            puts("YES");
        }
        else{
            puts("NO");
        }
    }
    return 0;
}

bool class_canceled(int arrival_times[], int threshold, int students){
    int arrived;
    
    for(int i = 0; i < students; ++i){
        if(arrival_times[i] <= 0){
            ++arrived;
        }
    }
    
    if(arrived >= threshold){
        return false;
    }
    else{
        return true;
    }
}