#include <stdio.h>
#include "maths.h"
int main() {
    //Problem 1
    printf("Problem 1:\n");
    int arr[] = {72,90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int arr2[] = {-72,-90,-100,-36,-21,-15,-76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int length = 20;
    int largest = arr[0];
    int smallest = arr[0];
    large_and_small(&arr[0],length, &largest, &smallest);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    largest = arr2[0];
    smallest = arr2[0];
    large_and_small(&arr2[0],length, &largest, &smallest);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);


    //Problem 2:
    printf("Problem 2:\n");
    length = 10;
    double leftArray[] = {15.26, 28.20, 6.71, 72.22, 92.85, 15.50, 85.64, 57.41, 44.40, 72.91};
    double right_array[] = {9.17, 4.8, 10.9, 10.12, 17.18, 3.9, 6.19, 5.4, 3.13, 6.1};
    double ans = inner_product(&leftArray[0],&right_array[0],length);
    printf("Answer = %lf\n", ans);


    //Problem 3:
    printf("Problem 3:\n");
    int left[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int right[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,0,23};
    int left_length = 20, right_length = 20;
    bool result = compareArrays(&left[0],left_length, &right[0], right_length);
    printf(result ? "true\n" : "false\n");

    int left2[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int right2[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,23};
    left_length = 20;
    right_length = 19;
    result = compareArrays(&left2[0],left_length, &right2[0], right_length);
    printf(result ? "true\n" : "false\n");
    return 0;


}
