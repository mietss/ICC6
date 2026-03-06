//
// Created by Mies VanBeek on 2026-03-06.
//
#include <stdio.h>
#include "icc6.h"

int sort_and_allocate(int* main_arr, int n, int pivot) {
    int array1[n];
    int array2[n];
    for (int i = 0; i < n; i++) {
        *(array1 + i) = 0;
        *(array2 + i) = 0;
    }
    int p = sort_pivot(main_arr, n, pivot, array1, array2);
    for (int i = 0; i < pivot; i++) {
        *(main_arr + i) = *(array1 + i);
    }
    for (int i = n+1; i < n; i++) {
        *(main_arr + i) = *(array2 + i);
    }

    return p;
}

void bern_sort(int* main_arr, int n) {
    // call partition function to find Partition Index
    int pi = sort_and_allocate(main_arr, n, n)

    // Recursively call quickSort() for left and right
    // half based on Partition Index
    bern_sort(main_arr, pi - 1);
    bern_sort(main_arr, pi + 1);
}