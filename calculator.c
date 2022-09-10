#include <stdio.h>

void addition(long int int1,long int int2)
{
    printf("%ld", int1 + int2);
}
void subtraction(long int int1,long int int2)
{
    printf("%ld", int1 - int2);
}
void multiplication(long int int1,long int int2)
{
    printf("%ld", int1 * int2);
}
void division(long int int1, long int int2)
{   if(int2!=0){
    if (int1 % int2 != 0)
    {
        float c = int1 / (float)int2;
        printf("%f", c);
    }
    else
    {
        printf("%ld", int1 / int2);
    }
  else{
    printf("ERROR : division by 0\n");
}
}
}
