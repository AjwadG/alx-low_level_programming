#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry level
 *
 * Description: Genrats a random value using rand and time as a seed
 * and the sum of all chars should be equal to 2772
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i, asciSum = 0, finalSum = 2772;
	char password[66], tmp;

	srand(time(NULL));
	i = 0;
	while (asciSum < finalSum - 100)
	{
		tmp = rand() % 94 + '!';
		asciSum += tmp;
		password[i] = tmp;
		i++;
	}
	password[i + 1] = '\0';
	password[i] = finalSum - asciSum;
	printf("%s", password);
	return (0);
}
