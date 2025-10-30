/*
 * This program calculates the number of diagonais of a convex polygon
 */

#include <stdio.h>

int main(void)
{
	int sides, diagonais;
	printf("Ammount of sides: ");
	scanf("%d", &sides);
	
	diagonais = sides * (sides - 3) / 2;
	
	printf("Diagonais: %d\n", diagonais);

	return 0;
}
