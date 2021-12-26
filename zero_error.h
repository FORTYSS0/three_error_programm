//
// Created by FORTYSS on 26.12.2021.
//
#include <iostream>

#ifndef PROGRAM_ZERO_ERROR_H
#define PROGRAM_ZERO_ERROR_H
void zero_error(int m[], int k){
    int j=m[k]/m[0];
    std::cout<<j;
}
#endif //PROGRAM_ZERO_ERROR_H
