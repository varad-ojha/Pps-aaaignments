#include <stdio.h>
int main()
{
    int x, y, z;
    float res;
    printf("======ARITHMETIC OPERATIONS======\n");
    printf("Enter the option number of the operation you want to perform:\n 1.Additon\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d", &x);
    printf("Enter the first number:\n");
    scanf("%d", &y);
    printf("Enter the second number:\n");
    scanf("%d", &z);
    switch (x)
    {
        case 1:
            res = y + z;
            printf("The result of addition is: %.2f\n", res);
            break;
        case 2:
            res = y - z;    
        printf("The result of subtraction is: %.2f\n", res);
            break;  
        case 3:
            res = y * z;
            printf("The result of multiplication is: %.2f\n", res);
            break; 
        case 4:
            if (z != 0) 
            {
                res = (float)y / z;
                printf("The result of division is: %.2f\n", res);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid option selected.\n");
            break;
}
    return 0;
}
