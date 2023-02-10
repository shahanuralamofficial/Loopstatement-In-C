//W.A.P. to accept 3 numbers from user one by one and displays their sum on screen.

#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter 3 Numbers: ");
    for(i=1; i<=3; i++)

        scanf("%d",&num);
        sum+=num;


    printf("Sum Of three Numbers: %d\n",sum);
    return 0;
}
