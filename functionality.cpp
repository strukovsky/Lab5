//
// Created by strukovsky on 16.11.2020.
//

#include <iostream>
#include <cstdlib>


void fill(double array[], int length){
    for (int i = 0; i < length; ++i) {
        int first = rand() - rand();
        int second = rand();
        if(second == 0)
            second = 17;
        array[i] = (double)first / second;
    }
}


char sum_of_less_than(char array[], int length, char n)
{
    std::cerr<<"Calculations with char are impossible\n";
}
