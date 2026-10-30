#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

BOOL ChkEven(int iNo)
{
    if((ino % 2)==0)
    {
       return true;
    }
    else
    {
      return false;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=false;

    printf("enter the number")
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);
    if(bRet==true)
    {
        printf("it is even\n");
    }
    else
    {
        printf("it is false");
    }

    

    return EXIT_SUCCESS;
}