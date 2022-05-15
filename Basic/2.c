#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("The sum of %d and %d is %d", number1, number2, sum);
    return 0;
}
