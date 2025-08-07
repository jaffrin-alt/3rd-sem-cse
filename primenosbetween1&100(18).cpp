#include <stdio.h>

int main()
{
    int num, i, count;

    printf("Prime numbers from 1 to 100:\n");

    for (num = 2; num <= 100; num++)
	{
        count = 0;

        for (i = 1; i <= num; i++)
		{
            if (num % i == 0)
                count++;
        }

        if (count == 2)
		{
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

