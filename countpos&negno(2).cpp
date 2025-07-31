#include <stdio.h>
int main() 
{
    int n, i, num;
    int pos = 0, neg = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;
    }
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    return 0;
}

