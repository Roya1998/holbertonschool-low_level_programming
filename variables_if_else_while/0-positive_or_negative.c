#include <stdlib.h>
#include <time.h>
#include <stdio.h>






/*First headers added */
/*Then main function added */
/*Then if else statement is written */






int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
