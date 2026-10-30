#include<stdio.h>
#include<stdlib.h>
void CheckNumber (int iValue)
{
    if(iValue>0)
    {
        printf("it is positve number");
    }
    else if(iValue<0)
    {
        printf("it is negative number");
    }
    else{
        printf("it is zero input");
    }

}
int main()
{
int iValue=0;
printf("enter a number :\n");
scanf("%d",&iValue);
CheckNumber(iValue);
return EXIT_SUCCESS;

}
