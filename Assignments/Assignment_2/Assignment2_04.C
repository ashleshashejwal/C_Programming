#include<stdio.h>
int Display(int iNo,int iFrequency)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;i++)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("enter number");
    scanf("%d"&iValue);

    printf("enter frequency");
    scanf("%d"&iCount);
    Display(iValue,iCount);


    return 0;
}