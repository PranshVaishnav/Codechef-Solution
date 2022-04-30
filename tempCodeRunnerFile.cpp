#include <stdio.h>

int main()
{

    int count = 0;
    do
    {
        char op;
        int first, second;
        printf("Mathematical operations program: \n");
        printf("Entered the first number:  ");
        scanf("%d", &first);
        printf("Entered the second number: ");
        scanf("%d", &second);
        printf("Choose the mathematical operation from the list during \n (+) if you want the first number + the second number \n (-) if you want the first number - the second number. \n (*) if you want the first number * the second number \n (/) If you want the first number / the second number \n (%)If you want the first number '%' the second number ");
        printf("Enter an operator (+, -, *, /, %): ");
        scanf("\n%c", &op);

        switch (op)
        {
        case '+':
            printf("%d + %d = %d\n", first, second, first + second);
            break;
        case '-':
            printf("%d - %d = %d\n", first, second, first - second);
            break;
        case '*':
            printf("%d * %d = %d\n", first, second, first * second);
            break;
        case '/':
            printf("%d / %d = %d\n", first, second, first / second);
            break;
        case '%':
            printf("%d (%) %d = %d\n", first, second, first % second);
            break;
        // operator doesn't match any case constant
        default:
            printf("Error! operator is not correct\n");
        }
        printf("Enter 1 to continue and -1 to exit ");
        scanf("%d", &count);
    } while (count != -1);
    return 0;
}