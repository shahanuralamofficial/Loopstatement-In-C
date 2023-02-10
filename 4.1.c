#include <stdio.h>

int main()
{
    int num, sum = 0, i;

    for (i = 1; i <= 3; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("The sum of the entered numbers is %d", sum);
    return 0;
}

