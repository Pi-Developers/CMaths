#include <stdio.h>
#include "connect.h"

int main(int argc, char** argv){

    int choice,i,output;

    while(1) {

        printf("\n             ~~~~~~~~~~~~~~~~~~~~~~~~ \n        Welcome to CMaths (Ultimate C Maths App)\n\n         ");
        printf("    ~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n     Would you like to do..?\n\n\t");
        printf("1-check even or odd      2-check prime number or not\n\t");
        printf("3-Check Divisbility      4-Check golden ratio\n\t");
        printf("5-Compute Factorial      6-Compute Fibonacci series\n\t");
        printf("7-Compute Pi             8-Solve a quadratic equation \n\t");
        printf("9-Logarithms Calculator       10-Compute Pascal's Triangle\n\t");
        printf("Choose an option :\n\n>>");

        scanf("%d", &choice);

        switch(choice) {

        // Check odd or even
        case 1:

            checkOddOrEven();

            break;

        // check prime number or not
        case 2:

            checkPrime();

            break;

        // Check Divisbility
        case 3:

            checkDivisbility();

            break;

        // Check golden ratio
        case 4:

            checkGoldenRatio();

            break;

        // Compute Factorial
        case 5:

            ComputeFactorial();

            break;

        // Compute Fibonacci series
        case 6:

            ComputeFibonacci();

            break;

        // Compute Pi
        case 7:

            ComputePi();

            break;

        // Solve a quadratic equation
        case 8:

            QuadraticEquation();

            break;

        // Logarithms Calculator
        case 9:
        
            Logarithm();

            break;

        // Compute Pascal's Triangle
        case 10:
        
            printf("Work in progress..");


            break;
            
            
        default:
        
            printf("Error!!");

            break;

        }
    }

    return 0;
}
