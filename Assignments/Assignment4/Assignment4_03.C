#include<stdio.h>
#include<stdlib.h>
void FindGreater(int iFirst, int iSecond)
    {
        if(iFirst > iSecond)
        {
            printf("%d: the first number is greatest number:",iFirst);
        }
        else
        {
            printf(" %d: the second number is greatest number:",iSecond);
        }

    }
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter first number");
    scanf("%d",&iValue1);

    printf("enter two numbers");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}