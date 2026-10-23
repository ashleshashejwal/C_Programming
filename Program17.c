#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iValue=0;
    printf("enter no:\n");
    scanf("%d",&iValue);
    if((iValue % 2)==0)
    {
        printf("it is even number");
    }
    else
    {
        printf("it is odd number");
    }

    return EXIT_SUCCESS;
}