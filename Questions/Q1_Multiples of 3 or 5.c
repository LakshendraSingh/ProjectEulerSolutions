/*
Q1.If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9 . The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <stdio.h>

int main (void){
    int sum = 0;
    int current_number = 0;
    while (current_number < 1000){
        if (current_number % 3 == 0 || current_number % 5 == 0){
            sum += current_number;
        }
        current_number += 1;
    }
    printf("sum = %d\n", sum);
    return 0;
}
