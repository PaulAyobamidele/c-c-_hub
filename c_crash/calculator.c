// DATA TYPES
// int - it stores integer values and it occupies +++++++ 4 bytes of memory
// char - it stores character values and it occupies +++++++ 1 byte of memory
// float - it stores floating-point numbers with a single precision ++++++ 4 byte of memory
// double - it stores floating point with double precision +++++++ 8 byte of memory

#include <stdio.h>

int main()
{

    // define your variables
    // define operator as a character
    // define the numbers and results as a double

    char operator;
    double num1, num2, result;

    // Request for user's variables and asign to the operator variable
    printf("Enter your desired operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Request the numbers to be operated upon
    printf("Please enter your desired numbers: ");
    scanf("%lf , %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2lf -  %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
        else
        {
            printf("Error!, Number is not divisible by zero");
        }
    }

    return 0;
}

// run the code
// gcc file.c -o file
// file.exe



