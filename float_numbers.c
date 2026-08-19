#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i = (1 << 24) - 1; // shifting the binary 1 to the left by 24 positions (1000000000000000000000000 -> or -> 1.0 * 2^24) = 16,777,216 and - 1 -> 16,777,216 - 1 = 16,777,215!!! 
	float	y;

	y = i;

	for (int j = 0; j < 5; j++)
	{
		printf("integer: %d ; floating point number:%f   ", i, y);	 // the decimal and the floating point
		printf("%08x ; %08x\n", i, *((int*)&y)); 					// hexadecimal representation of bits

		y = y + 1.0;
		i = i + 1;

		/* Here is what happens immediately after that limit:
		16,777,216: Representable.
		16,777,217: Not representable. It requires a 1 in the 24th fractional position, which gets truncated, rounding it back to 16,777,216.
		16,777,218: Representable. Its binary fraction ends at the 23rd bit, fitting perfectly into the significand.
		After 16,777,216, a float can only store even integers. As the numbers grow larger, the gaps continue to widen, eventually only storing multiples of 4, then 8, 16, and so on.
 */

		// From 16 777 216, a float can only store even integers!!! We can it is by incrementing with 2!
		//y = y + 2.0;
		//i = i + 2;
	}
	return (0);
}