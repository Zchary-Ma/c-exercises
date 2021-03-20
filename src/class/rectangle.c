#include <stdio.h>

/* Structs and typedefs can be used for consistency between files. */
typedef struct Rectangle {
    double width;
    double height;
}Rectangle;

// for large structs, you can pass them "by pointer" to avoid copying the whole struct:
double cal_area( struct Rectangle *);

double cal_area( struct Rectangle *rectangle_ptr){
    return rectangle_ptr->width * rectangle_ptr->height;

    // alternatives
    return (*rectangle_ptr).width * (*rectangle_ptr).height;
}