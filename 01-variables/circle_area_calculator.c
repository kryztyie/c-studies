#include <stdio.h>

int main()
{
    //variable definitions
    float area_circle;
    float radius;
    
    //aks for the radius
    printf("Type the radius of the circle: ");
    scanf("%f", &radius);
    
    //calculate the area of circle
    area_circle=3.14*(radius*radius);
    
    //display the area
    printf("\nThe area of the circle is: %.2f\n", area_circle);
    
    return 0;
}
