
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;
    int num2;
    char opreator;

    do {
        printf("Type here your operator (*, /, +, -) or 1 to exit: ");
        scanf(" %c", &opreator); // Space before %c to consume leading whitespace

        if (opreator == '1') {
            break;
        }

        printf("Type here your num 1, 2: ");
        scanf(" %d ,%d", &num, &num2); // Correct format specifier for input separated by comma

        switch (opreator) {
            case '+':
                printf("%d + %d = %d\n", num, num2, num + num2);
                break;
            case '-':
                printf("%d - %d = %d\n", num, num2, num - num2);
                break;
            case '*':
                printf("%d * %d = %d\n", num, num2, num * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("%d / %d = %.2lf\n", num, num2, (double)num / num2);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Error! Unknown operator\n");
        }

        // Consume any remaining characters in the input buffer
       

    } while(true);

    printf("Exiting the calculator.\n");
    printf("Thankyou for using our calculator . ");

    return 0;
}
