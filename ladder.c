/*
 * This program calculates the length of a ladder given the slope angle
 * and the wall's height
 * 
 * Compile with: gcc -std=c99 -lm -o ladder ladder.c
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	float angle, angle_rad, wall_height, ladder_length;

	printf("Angle in degrees: ");
	scanf("%f", &angle);
	printf("Wall height(m): ");
	scanf("%f", &wall_height);
	
	angle_rad = (angle * M_PI) / 180.0f;
	ladder_length = wall_height / sinf(angle_rad);

	printf("Ladder length: %.2fm\n", ladder_length);

	return 0;
}
