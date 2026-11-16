#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("my name is raja dubey ");
    printf("choose operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("enter two num: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+':
            printf("Sum = %d", a + b);
            break;
        case '-':
            printf("Sub = %d", a - b);
            break;
        case '*':
            printf("Mul = %d", a * b);
            break;
        case '/':
            printf("Div = %d", a / b);
            break;
        default:
            printf("wrong operator");
    }

    return 0;
}