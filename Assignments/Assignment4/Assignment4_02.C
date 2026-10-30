#include<stdio.h>
#include<stdlib.h>
void CheckEvenOdd(int iValue)
{
    if((iValue%2)==0)
    {
        printf("it is even number");
    }
    else
    {
        printf("it is odd number");
    }
}
int main()
{
    int iValue=0;
    printf("enter a number :");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}