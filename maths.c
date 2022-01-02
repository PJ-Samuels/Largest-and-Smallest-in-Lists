//
// Created by PJ Samuels on 2/25/21.
//
#include "maths.h"
void large_and_small(const int* array, int length, int* largest, int* smallest){
    for ( int i = 1 ; i < length ; i++ )
    {
        if (*(array+i) < *smallest)
            *smallest = *(array+i);
        if( *(array+i) > *largest )
            *largest = *(array+i);
    }
}
double inner_product(const double* leftArray, const double* right_array, int length)
{
    double ans = 0;
    for ( int i = 0 ; i < length ; i++ )
        ans += (*(right_array+i)*(*(leftArray+i)));
    return ans;

}
bool compareArrays(int* left, int left_length, int* right, int right_length){
    bool ans = true;
    int longer_length;
    if(right_length> left_length)
        longer_length = right_length;
    else
        longer_length = left_length;

    for ( int i = 0 ; i < longer_length ; i++ ) {
        if (*(left) != *(right)){
            ans = false;
            break;
        }
        left++;
        right++;
        ans = true;
    }
    return ans;
}
