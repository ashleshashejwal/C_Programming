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
#include<stdlib.h>

///////////////////////////////////////////////
//function name:    addition
//input:            integer,integer
//output:           integer
//description:      performs addition
//date:             04/10/2026
//author:           Ashlesha bhausaheb shejwal
//
//
////////////////////////////////////////////////////
int Addition(
                int iNo1,//first input
                int iNo2 //second input
            )
{
    int iAns=0;

    iAns=iNo1+iNo2;      //business logic

    return iAns;
}

////////////////////////////////////////////////////
/// entery point of the application
///
//
///////////////////////////////////////////////
int main()
{
    int iValue1=0, iValue2=0, iResult=0;
    printf("enter first number:\n");
    if(scanf("%d",&iValue1)!=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");
        return EXIT_FAILURE;
    }

    printf("enter second number:\n");
    if(scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");
        return EXIT_FAILURE;
    }

    iResult=Addition(iValue1,iValue2);  
    printf("Addition is:%d\n",iResult);
    
    return EXIT_SUCCESS;
}
//////////////////////////////////
//step 5:test the program
//  tested test case
//------------------------------------------
//  input1    input2  output
//--------------------------------------------
//  10          11      21
//  11          0        11
//
//////////////////////////////////////