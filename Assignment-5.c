#include <stdio.h>
#include <string.h>
int main()
{
    int x,l;
    char str1[50], str2[50];
    do
    {
    printf("====== String Comparison Program ======\n");
    printf(" Enter the number of the operation you want to perform:\n 1. find the length of a string\n 2. Concatenate two strings\n 3. Compare two strings\n 4. Copy one string to another\n 5. Exit \n");
    scanf("%d", &x);
    switch (x)
    {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            l = strlen(str1);
            printf("Length of the string is: %d\n", l);
            break;
        case 2:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated string is: %s\n", str1);
            break;
        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0)
                printf("The strings are equal.\n");
            else
                printf("The strings are not equal.\n");
            break;
        case 4:
            printf("Enter source string: ");
            scanf("%s", str1);
            strcpy(str2, str1);
            printf("Copied string is: %s\n", str2);
            break;
            case 5:
            printf("Exiting the program.\n");
        default:
            printf("Invalid choice.\n");
            break;
}
    }while (x > 5);
    return 0;
}
