#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		putchar((74215240 >> ((i & 3) << 3) & 255));
	}
	return (0);
}
