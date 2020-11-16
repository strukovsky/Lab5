//
// Created by strukovsky on 16.11.2020.
//

#ifndef LAB5_FUNCTIONALITY_H
#define LAB5_FUNCTIONALITY_H

#include <iostream>

void fill(double array[], int length);
char sum_of_less_than(char array[], int length, char n);

template <class T>
void fill(T array[], int length)
{
    for (int j = 0; j < length; ++j) {
        std::cin>>array[j];
    }
}

template <class T>
T sum_of_less_than(T array[], int length, T n)
{
    T sum = 0;
    for (int i = 0; i < length; ++i) {
        if(array[i] < n)
            sum += array[i];
    }
    return sum;
}



#endif //LAB5_FUNCTIONALITY_H
