#include <stdio.h>

int main() {
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Remainder");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %d\n", num1 + num2);
            break;

        case 2:
            printf("Result = %d\n", num1 - num2);
            break;

        case 3:
            printf("Result = %d\n", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2f\n", (float)num1 / num2);
            else
                printf("Division by zero is not possible.\n");
            break;

        case 5:
            if(num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Division by zero is not possible.\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
