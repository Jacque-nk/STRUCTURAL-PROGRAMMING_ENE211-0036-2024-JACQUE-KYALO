#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592653589793

int main()
{
  double radius, surfacearea;

  printf("Enter the radius of the sphere: ");
  scanf("%lf", &radius);

  if (radius < 0){
    printf("Error: radius cannot be negative.\n");
    return 1;
  }
  surfacearea = 4 * PI * radius * radius;

  printf("The surfacearea of the sphere is: %.4lf\n", surfacearea);

    return 0;
}
