#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double SurfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    SurfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("The Area is %.2lfcm\n", area);
    printf("The radius is %.1lfcm\n", radius);
    printf("THe SurfaceArea is %.2lfcm\n", SurfaceArea);
    printf("The Volume is %.2lfcm\n", volume);

}