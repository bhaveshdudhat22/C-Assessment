/*
Create menu driven calculator using function
*/

#include<stdio.h>

void manu();                                 // Create a function and name it manu.

int number1();                              // Create a function and name it number1 which return value of number1.
int number2();                              // Create a function and name it number2 which return value of number2.

int main()
{
    int num1, num2, result, choice;
    manu();

    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    printf("\n");

    switch(choice)
    {
        case 1:                                             // Choice 1 for Addition of num1 and num2
        num1 = number1();
        num2 = number2();
        result = num1 + num2;
        printf("\nAddition = %d",result);
        printf("\n--------------------------");
        break;

        case 2:                                             // Choice 2 for Substraction of num1 and num2
        num1 = number1();
        num2 = number2();
        result = num1 - num2;
        printf("\nSubstraction = %d",result);
        printf("\n--------------------------");
        break;

        case 3:                                             // Choice 3 for Multiplication of num1 and num2
        num1 = number1();
        num2 = number2();
        result = num1 * num2;
        printf("\nMultiplication = %d",result);
        printf("\n--------------------------");
        break;

        case 4:                                             // Choice 1 for Division of num1 and num2
        num1 = number1();
        num2 = number2();
        result = num1 / num2;
        printf("\nDivision = %d",result);
        printf("\n--------------------------");
        break;

        default:
        printf("Invalid Choice !!!!");
        printf("\n--------------------------");
        break;      
    }
}

void manu()                                                 // Define manu function
{
    printf("--------------MENU--------------\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");
}

int number1()                                              // Define number1 function
{
    int num1;
    printf("Enter first number : ");
    scanf("%d",&num1);
    return num1;
}

int number2()                                              // Define number2 function
{
    int num2;
    printf("Enter second number : ");
    scanf("%d",&num2);
    return num2;
}