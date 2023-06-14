#include "main.h"

int main(void)
{
	int _isalpha = 'A';

	do
	{
	
		putchar(_isalpha);
		_isalpha++;
	}
	
	while (_isalpha != 'Z'+1);
		puts("\n");
	

	return 0;
}
	

