#include <stdio.h>

void addition(long int int1,long int int2)
{
    printf("%ld", int1 + int2);
}
int main()
{

    printf("Enter first number :\n");
    long int int1;
    scanf("%ld", &int1);

    long int int2;
    printf("Enter second number :\n");
    scanf("%ld", &int2);

    printf("Enter code of the operation to be performed:\n 1. Add \t 2. Subtract \t 3. Multiply \t 4. Divide\n");
    int code;
    scanf("%d", &code);

    switch (code)
    {
    case 1:
        addition(int1, int2);
        break;
    case 2:
        subtraction(int1, int2);
        break;
    case 3:
        multiplication(int1, int2);
        break;
    case 4:
        division(int1, int2);
        break;
    }
}
