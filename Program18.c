#include<stdio.h>
#include<stdlib.h>
void CheckEven(int ino)
{
    if((ino % 2)==0)
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
    printf("enter no:\n");
    scanf("%d",&iValue);
    CheckEven(iValue);
    return EXIT_SUCCESS;
}