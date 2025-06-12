#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;
    printf("Type an integer: ");
    scanf("%d", &x);
    printf("You typed: %d\n", x);
    x = x + 1;
    while (true)
    {
        x = x + 1;
        if (x > 2)
        {
            break;
        }
    }
    printf("x = %d\n", x);
    return 0;
}