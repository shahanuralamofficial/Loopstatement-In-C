//W.A.P. to find out factorial value of given number.

#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter any  number for caculate it's factorial value: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        fact*=i;

    }
        printf("\nThe factorial value of %d is: %d\n",num,fact);

    return 0;
}
