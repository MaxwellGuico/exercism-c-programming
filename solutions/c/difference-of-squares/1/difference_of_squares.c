#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number){
    if(number == 0){
        return 0;
    }
    else{
        return number * number + sum_of_squares(number - 1);
    }
    
}
unsigned int square_of_sum(unsigned int number){
    int sum = 0;
    for (int i = number; i > 0; i--) {
        sum += i;
    }
    return sum * sum;
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}