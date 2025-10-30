/*
 * This program calculate the dimensional weight of a box
 */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
	int height, length, volume, weight, width;
	
	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);

	volume = height * length * width;
	weight = (volume + 165) / INCHES_PER_POUND; // Add 165 to volume to round up the division
	
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
