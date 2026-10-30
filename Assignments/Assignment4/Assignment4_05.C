#include<stdio.h>
#include<stdlib.h>
void ChechDivisibility(int iValue)
{
    if((iValue%5)==0)
    {
        printf("it is divisible number %d",iValue);
    }
    else
    { 
        printf("it is not divisible number %d",iValue);
    }

}
int main()
{
    int iValue=0;

    printf("enter a number: ");
    scanf("%d",&iValue);
    ChechDivisibility(iValue);

    return EXIT_SUCCESS;
}