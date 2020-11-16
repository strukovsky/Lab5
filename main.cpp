#include <iostream>
#include "functionality.h"


int main() {

    int *arr_int = new int[5];
    double *arr_double = new double [5];
    char *arr_char = new char[5];
    std::cout<<"Enter int array\n";
    fill<int>(arr_int, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout<<arr_int[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Enter double array\n";
    fill(arr_double, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout<<arr_double[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Entering char array\n";
    fill(arr_char, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout<<arr_char[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Calculating sum of array\n";
    int n_for_int;
    std::cout<<"Enter n for int array\n";
    std::cin>>n_for_int;
    std::cout<<"Sum of int "<<sum_of_less_than(arr_int, 5, n_for_int)<<"\n";
    double n_for_double;
    std::cout<<"Enter n for double array\n";
    std::cin>>n_for_double;
    std::cout<<"Sum of double "<<sum_of_less_than(arr_double, 5, n_for_double)<<"\n";
    char n_for_char;
    std::cout<<"Enter n for char array\n";
    std::cin>>n_for_char;
    std::cout<<"Sum of char "<<sum_of_less_than(arr_char, 5, n_for_char)<<"\n";
    


    return 0;
}
