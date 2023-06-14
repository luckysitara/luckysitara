#include "main.h"
int main(void)
{
	int alpha = 'z';

	do
	{
		putchar(alpha);
		alpha--;
	}
	while (alpha != 'a' - 1);
	return 0;
}
