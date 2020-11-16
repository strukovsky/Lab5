//
// Created by strukovsky on 16.11.2020.
//

#include <iostream>
#include <cstdlib>

template<typename T>
void fill(T array[], int length)
{
    for (int j = 0; j < length; ++j) {
        std::cin>>array[j];
    }
}

template <typename T>
T sum_of_less_than(T array[], int length, T n)
{
    T sum = 0;
    for (int i = 0; i < length; ++i) {
        if(array[i] < n)
            sum += array[i];
    }
    return sum;
}

//template<double>
//void fill(double array[], int length){
//    for (int i = 0; i < length; ++i) {
//        int first = rand() - rand();
//        int second = rand();
//        if(second == 0)
//            second = 17;
//        array[i] = (double)first / second;
//    }
//}


//char sum_of_less_than(char array[], int length, char n)
//{
//    std::cerr<<"Calculations with char are impossible\n";
//}

template<int> void fill(int array[], int length);
//
//template<> void fill(char array[], int length);
//
//template<> int sum_of_less_than( int array[], int length, int n);
//template<> double sum_of_less_than( double array[], int length, double n);