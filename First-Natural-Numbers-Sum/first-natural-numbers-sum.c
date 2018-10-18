#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int n, result = 0, i = 0;

    printf("Enter the amount of the first natural numbers to sum: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        result += i;
    }
    
    printf("Result: %d", result);

    return 0;
}
