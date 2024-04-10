#include<stdio.h>
#include<math.h>
#define size 8

int main()
{
    long long binary[size];
    int sum = 0, i;

    printf("Enter the binary number (8 digits): ");
    for(i = 0; i < size; i++)
    {
        scanf("%lld", &binary[i]);
    }
    
    for(i = 0; i < size; i++)
    {
        sum += binary[i] * pow(2, size - i - 1);
    }
    
    printf("The decimal equivalent is %d\n", sum);

    return 0;
}

