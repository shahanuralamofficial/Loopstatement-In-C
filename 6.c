//W.A.P. to accept two integer numbers from user and calculate its power value. (hint: pow)

#include<stdio.h>
int main()
{
    int base,power,pow=1,i;
    printf("Enter First Number: ");
    scanf("%d",&base);
    printf("\nEnter Second Number: ");
    scanf("%d",&power);

    for(i=1; i<=power; i++)
    {
        pow*=base;
    }

    printf("\nThe Power Value Is: %d\n",pow);

    return 0;
}
