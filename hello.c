#include <stdio.h>

/* Hello world 
 * by Adrian Haber
 */

int main(int argc, char *argv[])
{
	printf("Hello world!\n");
	printf("written by Adrian Haber\n");

	/* This section commputes a sum of x and y. */
	int x, y, z;
	x = 10;
	y = 20;
	z = x + y;
	printf("x is %d, and y is %d, and z is %d\n", x, y, z);
	
	/* This section computes the volume of a box with dimensions h, w, and d. */
	int h, w, d, v;
	h = 11;
	d = 14;
	w = 7;
	v = h*d*w;
	printf("height is %d, deapth is %d, width is %d, volume is %d\n", h, d, w, v);
	return 0;
}
