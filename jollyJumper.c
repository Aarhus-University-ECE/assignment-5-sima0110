#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>

/* Function determining whether a sequnce of numbers is a jolly jumper  */
bool isJollyJumper(const int seq[], int size) {
    int diffs[size -1]; /* Array of differences between numbers in the sequnce */
    int i; /* Counter variable */

    /* Loop calculating differences between numbers */
    for(i = 0; i < size; i++) {
        diffs[i] = seq[i] - seq[i + 1]; /* Subtraction of the numbers in the sequnce */
        
        /* Makes a negative difference positive */
        if(diffs[i] < 0) {
            diffs[i] = - diffs[i];
        }
    }
    
    bool diffs_found[size - 1]; /* Differences found in the sqeunce */
   
    /* Loop initialising all elements in the boolean array as false */
    for(i = 0; i < size; i++) {
        diffs_found[i] = false;   
    }
    
    int temp_diff = 0; /* A temporary difference value */

    /* Loop checking what differences have been found */
    for(i = 0; i < size - 1; i++) {
        temp_diff = diffs[i];

        /* If a diffrence hasn´t been found before, is larger than zero and is smaller than the size of sequence,
            this statement runs  */
        if (diffs_found[temp_diff] == false && temp_diff > 0 && temp_diff <= size){
            diffs_found[temp_diff] = true;
        }
        else
            return false;
    }

    return true;
    /*post: answer to exercise 7.a*/
}