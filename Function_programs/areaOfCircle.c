/*Write a C program to find diameter, circumference and area of circle using functions.*/

#include <stdio.h>
#include <math.h>

//function declarations
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main()

{
	float radius, diameter, circumf, area;
	
	//input from user
	printf("Enter the radius of a circle: ");
	scanf("%f", &radius);
	
	diameter = getDiameter(radius);
	circumf = getCircumference(radius);
	area = getArea(radius);
	
	printf("Diameter of the circle = %.2f units\n", diameter);
    printf("Circumference of the circle = %.2f units\n", circumf);
    printf("Area of the circle = %.2f sq. units", area);
    
	return 0;
}

//Calculate diameter of circle
double getDiameter(double radius)
{
	return (2 * radius);
}

//Calculte circumference of circle
double getCircumference(double radius)
{
	return (2 * M_PI *radius);
}

//calculate area of circle
double getArea(double radius)
{
	return (M_PI * radius * radius);
}