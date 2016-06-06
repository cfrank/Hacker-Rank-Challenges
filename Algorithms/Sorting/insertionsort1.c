/* https://www.hackerrank.com/challenges/insertionsort1 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *ar);
void print_array(int ar_size, int *ar);

int main(void)
{
    int array_size;
    scanf("%d", &array_size);

    int num_list[array_size];
    for(int i = 0; i < array_size; ++i) { 
        scanf("%d", &num_list[i]); 
    }

    insertionSort(array_size, num_list);
    return 0;
}

void insertionSort(int array_size, int *num_list)
{
    int unsorted_num = num_list[array_size - 1];
    
    for(int i = array_size - 1; i > 0; --i){
        do{
            num_list[i] = num_list[i - 1];
            print_array(array_size, num_list);
            --i;
        }while((i - 1) >= 0 && num_list[i - 1] > unsorted_num);

        num_list[(i - 1) + 1] = unsorted_num;
        print_array(array_size, num_list);

        return; /* Exit out of for loop */
    }
}

void print_array(int array_size, int *num_list)
{
    for(int i = 0; i < array_size; ++i){
        printf("%d ", num_list[i]);
    }

    printf("%s", "\n");
}
