#include <stdio.h>

void square(int *integer) // Function for squaring
{
    *integer = *integer* *integer;
}

int main(void) // Main void
{
    
    int Number1, Number2, Number3, Number4; // Creating int variables
    int sum, multiply;
    
    printf("Please enter your 1st Number: ");
    scanf("%d",&Number1);
    
    printf("\nPlease enter your 2nd Number: ");
    scanf("%d",&Number2);
    
    printf("\nPlease enter your 3rd Number: "); // Taking inputs from user
    scanf("%d",&Number3);
    
    printf("\nPlease enter your 4th Number: ");
    scanf("%d",&Number4);
    
    sum = Number1 + Number2 + Number3 + Number4; // Updating the sum and multiply
    multiply = Number1 *  Number2 * Number3 *Number4;
    
    printf("\n1st Number:  %d\t  memory adress: %d\n2nd Number:  %d\t  memory adress: %d",Number1,&Number1,Number2,&Number2); // Printing numbers and their memory address
    
    printf("\n3rd Number:  %d\t  memory adress: %d\n4th Number:  %d\t  memory adress: %d",Number3,&Number3,Number4,&Number4);
    
    printf("\n\nSum of all the inputed integers = %d",sum); // Printing the sum
    
    printf("\nThe product of all inputed integers = %d",multiply);
    
    square(&Number1);
    printf("\n\n1st Number squared :  %d",Number1);
    
    square(&Number2);
    printf("\n2nd Number squared : %d",Number2); // Calling the function individually
    
    square(&Number3);
    printf("\n3rd Number squared : %d",Number3);
    
    square(&Number4);
    printf("\n4th Number squared : %d\n\n",Number4);
    
    return 0; // Exiting the code with 0
}
