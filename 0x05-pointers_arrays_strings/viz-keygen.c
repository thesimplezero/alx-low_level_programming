#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(NULL));
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index];
		printf("password[%d]: %c, sum: %d\n", index, password[index], sum);
		index++;
	}
	password[index] = '\0';
	
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		printf("diff_half1: %d, diff_half2: %d\n", diff_half1, diff_half2);

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half1;
				printf("password[%d]: %c\n", index, password[index]);
				break;
			}
		}
		
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				printf("password[%d]: %c\n", index, password[index]);
				break;
			}
		}
	}

	printf("Final password: %s\n", password);
	return (0);
}
