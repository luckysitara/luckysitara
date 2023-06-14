#include "main.h"
int main(void)
{
	int letter = 'a';

	while (letter != 'z' + 1)
	{
		putchar(letter);
		letter++;
	}
	return 0;
}
