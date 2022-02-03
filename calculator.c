#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //DECLARATION
    int x;
    int y;
    int operation;

    // ASSIGNMENT (INPUT)
    printf("%s\n", "1.Addition");
    printf("%s\n", "2.Subtraction");
    printf("%s\n", "3.Multiplication");
    printf("%s\n", "4.Division");
    printf("%s\n", "Choose the operation you want, typing its respective number.");
    scanf("%d", &operation);

    //PROCESSING
    switch(operation)
    {
    case 1:
        printf("%s\n", "You chose Addition:");
        // ASSIGNMENT (INPUT)
        printf("%s\n", "Enter the first number: ");
        scanf("%d", &x);
        printf("%s\n", "Enter the second number: ");
        scanf("%d", &y);
        int sum =0;

        //PROCESSING
        sum = x + y;

        //OUTPUT
        printf("%s\n%d","Your sum result is: ", sum);
        printf("\n");
        break;

    case 2:
        printf("%s\n", "You chose Subtraction");
        // ASSIGNMENT (INPUT)
        printf("%s\n", "Enter the first number: ");
        scanf("%d", &x);
        printf("%s\n", "Enter the second number: ");
        scanf("%d", &y);
        int subtraction =0;

        //PROCESSING
        subtraction = x - y;

        //OUTPUT
        printf("%s\n%d","Your subtraction result is: ", subtraction);
        printf("\n");
        break;

    case 3:
        printf("%s\n", "You chose Multiplication:");
        // ASSIGNMENT (INPUT)
        printf("%s\n", "Enter the first number: ");
        scanf("%d", &x);
        printf("%s\n", "Enter the second number: ");
        scanf("%d", &y);
        int multiplication =0;

        //PROCESSING
        multiplication = x * y;

        //OUTPUT
        printf("%s\n%d","Your multiplication result is: ", multiplication);
        printf("\n");
        break;

    case 4:
        printf("%s\n", "You chose Division:");
        // ASSIGNMENT (INPUT)
        printf("%s\n", "Enter the first number: ");
        scanf("%d", &x);
        printf("%s\n", "Enter the second number: ");
        scanf("%d", &y);
        int division =0;

        //PROCESSING
        division = x / y;

        //OUTPUT
        printf("%s\n%d","Your division result is: ", division);
        printf("\n");
        break;

    default:
        printf("This operation does not exist");
        break;
    }

    //OUTPUT

    printf("\n");

    system("PAUSE");
    return 0;

}
