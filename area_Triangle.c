//calculate area of a triangle


#include <stdio.h>
#define half 0.5
int main()
{
	float height;
	float base;
	float area;

	printf("Enter a height for your triangle: ");
	scanf("%f", &height);

	printf("Enter a base for your triangle: ");
	scanf("%f", &base);

	area = base * height * half;

	printf("The area of your triangle is %.2f \n", area);






return 0;
}