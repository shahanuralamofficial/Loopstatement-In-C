//Time Table With Loop//

#include <stdio.h>
int main()
{
    int num,i;
    while (1)//This loop for continue multiple time.
    {
        printf("Enter Any Number: ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        printf("%d X %d = %d",num,i,num*i);
    }
   return 0;
}