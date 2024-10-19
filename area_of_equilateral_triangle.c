#include <stdio.h>
#include <math.h>

int main() 
{
    float side = 12;
    float area_of_equilateral_triangle;
    
    area_of_equilateral_triangle = (sqrt(3) / 4) * side * side;
    
    printf("Value of side length of the equilateral triangle : %.2f\n\n", side);
    printf("Area of the equilateral triangle : %.2f\n", area_of_equilateral_triangle);
    
    return 0;
}
