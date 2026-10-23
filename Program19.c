#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckEven(int ino)
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
    bool bRet= false;

    printf("enter no:\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
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