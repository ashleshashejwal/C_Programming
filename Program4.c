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
int main()
{
    int iValue1, iValue2, iResult;
    printf("enter first number:\n");
    scanf("%d",&iValue1);

    printf("enter second number:\n");
    scanf("%d",&iValue2);

    iResult=iValue1+iValue2;  //business logic
    printf("%d\n",iResult);
    
    return 0;
}