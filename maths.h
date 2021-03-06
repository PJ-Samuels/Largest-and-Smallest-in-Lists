//
// Created by PJ Samuels on 2/25/21.
//
#ifndef CS210_MATHS_H
#define CS210_MATHS_H
#include <stdbool.h>

void large_and_small(const int* array, int length, int* largest, int* smallest);
double inner_product(const double* leftArray, const double* right_array, int length);
bool compareArrays(int* left, int left_length, int* right, int right_length);

#endif //CS210_MATHS_H

