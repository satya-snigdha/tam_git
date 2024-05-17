/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//make some changes 

// make changes
int multiplication(int num1, int num2)
{
    int result=0;
    result=num1*num2;
    return result;
}

int division(int num1, int num2)
{
    int result=0;
    if (num2!=0)
    {
        result=num1/num2;
    }
    return result;
}

int main()
{
    int num1,num2,num3;
    int res;
    printf("Enter 3 numbers");
    scanf("%d %d",&num1,&num2,&num3);
    res=num1+num2+num3;
    printf("Result %d",res);
}
