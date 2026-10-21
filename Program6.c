/*
step1:understand the problem statment
step2:write the algorithm
step3:decide the program language
step4:write the program
step5:test the program
*/
////////////////////////////////////////////////////////////
//
//step1:understand the problem statment
//user is going to enter any two integer
//and we have to perform addition
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//step2:write the algorithm
/*
start
        accept first number as no1
        accept first number as no2
        create the variable as ans to store the result
        perform the addition and store into ans
        display the result from ans
end
*/
////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
//
//step3: decide the program language
//          we select the c programming           
////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
//step4:write the program
///////////////////////////////////////////////////////////
#include<stdio.h>
int Addition(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1+iNo2; //business logic

    return iAns;
}
int main()
{
    int iValue1=0, iValue2=0, iResult=0;
    printf("enter first number:\n");
    scanf("%d",&iValue1);

    printf("enter second number:\n");
    scanf("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);  
    printf("Addition is:%d\n",iResult);
    
    return 0;
}