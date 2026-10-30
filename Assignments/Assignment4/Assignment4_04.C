#include<stdio.h>
#include<stdlib.h>
void ChechVotingEliglibity(int iAge)
{
    if(iAge>18)
    {
        printf("congrutilation you are eligible to vote");
    }
    else
    {
        printf("sorry you are not eligible to vote");
    }

}

int main()
{
    int iAge=0;
    printf("enter your age:");
    scanf("%d",&iAge);
    ChechVotingEliglibity(iAge);
    return EXIT_SUCCESS;
}